#include<iostream>
#include<string>
using namespace std;
int countWords(string str) {
	int counter = 0;
	for (int i = 0; i < str[i] != '\0'; ++i) {
		if (str[i] == ' ') {
			++counter;
		}
	}
	return counter + 1;
}
int main() {
	string str;
	cout << "Input string:" << endl;
	getline(cin, str);
	cout << "Words:" << countWords(str) << endl;
	system("pause");
}
