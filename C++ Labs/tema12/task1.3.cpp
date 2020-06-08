#include <iostream>
#include <locale.h>
#include <algorithm>
using namespace std;

struct library {
    string authorsurname;
    string bookname;
    int yearofpublishing;
    char group;
};
bool comparebyauthor(library a, library b) {
    return a.authorsurname < b.authorsurname;
}

int main()
{
   const  int n = 3;
    library library[n];
    int choice;
    for (int i = 0; i < n; ++i) {
        cout << "input author:" << endl;
        cin >> library[i].authorsurname;
        cout << "input book name:" << endl;
        cin >> library[i].bookname;
        cout << "input year:" << endl;
        cin >> library[i].yearofpublishing;
        cout << "input group: (1 - fiction. 2 - educational literature. 3 - reference literature )" << endl;
        cin >> choice;
        while (choice!=1 && choice!=2 && choice!=3) {
            cout << "input group: (1 - fiction. 2 - educational literature. 3 - reference literature )" << endl;
            cin >> choice;
        }
        if (choice == 1) {
            library[i].group = 'x';
        }
        else if (choice == 2) {
            library[i].group = 'y';
        }
        else {
            library[i].group = 'c';
        }
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| library                                                                                                                                                                                                    |" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "|author|" << "\t\t\t\t" << "|name|" << "\t\t\t\t\t" << "|year|" << "\t\t\t\t" << "|group|"<<endl;
    sort(library, library+n, comparebyauthor);
    for (int i = 0; i < n; ++i) {
        cout << library[i].authorsurname << "\t\t\t\t\t"; cout << library[i].bookname << "\t\t\t\t\t"; cout << library[i].yearofpublishing << "\t\t\t\t\t"; cout << library[i].group << "\t\t\t\t\t"<<endl;
       
    }
    cout << "|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
}
