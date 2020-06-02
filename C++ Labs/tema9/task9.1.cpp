#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cout << "Input string:" << endl;
	getline(cin, s);
	s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

	cout << s;
	system("pause");
	return 0;
}
