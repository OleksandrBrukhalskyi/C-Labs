#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n = 0;
	int sum = 0;
	fstream file("111.txt");
	while (file >> n) {
		sum += n;
	}
	cout << "Sum:" << sum << endl;
}
