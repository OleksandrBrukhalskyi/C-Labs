#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void writeToTheBeggining(string str) {
	string s;
	ifstream f("test.txt");
	while (!f.eof()) {
		s += f.get();
	}
	f.close();
	str += s;
	ofstream F("test.txt");
	F << str;
	F.close();
}
int main() {
	string str;
	cout << "Input text for inserting at the beggining of the file:" << endl;
	getline(cin,str);
	writeToTheBeggining(str);
}
