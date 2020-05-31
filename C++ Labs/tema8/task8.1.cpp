#include <iostream>
using namespace std;

double addFractionsRecursively(int x) {
	double sum = 0;
	if (x >= 1) {
		return  sum += addFractionsRecursively(x - 1) / x;
	}
	else {
		return 1;

	}
}
int main() {
	double res = addFractionsRecursively(7);
	cout << res << endl;
}
