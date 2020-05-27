#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int* init(int *arr, int size) {
	const int Low = 6;
	const int High = 20;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; ++i) {
		arr[i] = Low + rand() & (High - Low + 1);
	}
	return arr;
}
void printArray(int* arr , int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";	
	}
}	

int multOfElementsWithEvenIndexes(const int *arr, int size) {
	int mult = 1;
	for (int i = 0; i < size; ++i) {

	}
}
int main() {
	
}