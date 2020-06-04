#include <iostream>
#include <string>
using namespace std;
string longestWord(string str) {
	string tmp = "";
	string maxWord = "";
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] != ' ') {
			tmp += str[i];
		}
		else {
			tmp = "";
		}
		if (tmp.size() > maxWord.size()) {
			maxWord = tmp;
		}
	}
	return maxWord;
}
int main() {
	string str;
	cout << "Input string:" << endl;
	getline(cin, str);
	cout << "The longest word is " << longestWord(str) << endl;
	system("pause");
}
