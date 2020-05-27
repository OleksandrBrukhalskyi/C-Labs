#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int* init(int *arr, int size) {
	const int Low = 1, High = 100;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; ++i) {
		arr[i] = Low + rand() % (High-Low + 1);
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
		if (i % 2 == 0) {
			mult *= arr[i];
		}
	}
	return mult;
}
int main() {
	const int size = 10;
	int arr[size];
	int* p = init(arr, size);
	printArray(arr, size);
	cout <<"Res:"<< multOfElementsWithEvenIndexes(arr, size) << endl;

}