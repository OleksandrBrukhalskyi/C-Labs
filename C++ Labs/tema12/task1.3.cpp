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
bool compareByAuthor(Library a, Library b) {
    return a.authorSurname < b.authorSurname;
}

int main()
{
    int n;
    cout << "Input rows count:" << endl;
    cin >> n;

    setlocale(LC_CTYPE, "rus");
    Library library[2];
    int choice;
    for (int i = 0; i < n; ++i) {
        cout << "Input author:" << endl;
        cin >> library[i].authorSurname;
        cout << "Input book name:" << endl;
        cin >> library[i].bookName;
        cout << "Input year:" << endl;
        cin >> library[i].yearOfPublishing;
        cout << "Input group: (1 - Fiction. 2 - Educational literature. 3 - Reference literature )" << endl;
        cin >> choice;
        while (choice!=1 && choice!=2 && choice!=3) {
            cout << "Input group: (1 - Fiction. 2 - Educational literature. 3 - Reference literature )" << endl;
            cin >> choice;
        }
        if (choice == 1) {
            library[i].group = 'X';
        }
        else if (choice == 2) {
            library[i].group = 'Y';
        }
        else {
            library[i].group = 'C';
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| Library                                                                                                                                                                                                    |" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "|Author|" << "\t\t\t\t" << "|Name|" << "\t\t\t\t\t" << "|Year|" << "\t\t\t\t" << "|Group|"<<endl;
    sort(library, library+n, compareByAuthor);
    for (int i = 0; i < n; ++i) {
        cout << library[i].authorSurname << "\t\t\t\t\t"; cout << library[i].bookName << "\t\t\t\t\t"; cout << library[i].yearOfPublishing << "\t\t\t\t\t"; cout << library[i].group << "\t\t\t\t\t"<<endl;
       
    }
    cout << "|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
}
