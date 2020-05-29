#include <iostream>
#include <locale.h>
#include <algorithm>
using namespace std;

struct Library {
    string authorSurname;
    string bookName;
    int yearOfPublishing;
    char group;
};
bool compareByAuthor(const struct Library& a, const struct Library& b) {
    return a.authorSurname < b.authorSurname;
}

int main()
{
    setlocale(LC_ALL, "ukr");
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
    cout << "INFO BEFORE SORT" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << library[i].authorSurname << endl;
        cout << library[i].bookName << endl;
        cout << library[i].yearOfPublishing << endl;
        cout << library[i].group << endl;
    }
    sort(library, library, compareByAuthor);
    cout << "INFO AFTER SORT" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << library[i].authorSurname << endl;
        cout << library[i].bookName << endl;
        cout << library[i].yearOfPublishing << endl;
        cout << library[i].group << endl;
    }
}
