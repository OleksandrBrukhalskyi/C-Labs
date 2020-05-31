#include <iostream>
using namespace std;

int factorial(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * factorial(x - 1);
	}
}
void buildTeamWithJumper() {
	int res =  factorial(6) / (factorial(3) * factorial(3))
		* factorial(3) / (factorial(2) * factorial(1)) + factorial(6) / (factorial(4) * factorial(2)) * factorial(3) / (factorial(1) * factorial(2)) +
		factorial(6) / (factorial(5) * factorial(1)) * factorial(1);
		cout<<res;
}
int main() {
	buildTeamWithJumper();
}
