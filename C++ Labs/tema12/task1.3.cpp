#include <iostream>
#include <locale.h>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Library {
    string authorSurname;
    string bookName;
    int yearOfPublishing;
    char group;
};
bool compareByAuthor(Library a, Library b) {
    return a.authorSurname < b.authorSurname;
}

int main()
{
    setlocale(LC_CTYPE, "rus");
    Library library[2];
    for (int i = 0; i < 2; ++i) {
        cout << "Input author:" << endl;
        cin >> library[i].authorSurname;
        cout << "Input book name:" << endl;
        cin >> library[i].bookName;
        cout << "Input year:" << endl;
        cin >> library[i].yearOfPublishing;
        cout << "Input group:" << endl;
        cin >> library[i].group;
    }
    cout << "Library" << endl;
    cout << "Author" << "\t\t\t\t" << "Name" << "\t\t\t\t\t" << "Year" << "\t\t\t\t" << "Group"<<endl;
    sort(library, library+2, compareByAuthor);
    for (int i = 0; i < 2; ++i) {
        cout << library[i].authorSurname << "\t\t\t\t\t"; cout << library[i].bookName << "\t\t\t\t\t"; cout << library[i].yearOfPublishing << "\t\t\t\t\t"; cout << library[i].group << "\t\t\t\t\t"<<endl;
       
    }
}
