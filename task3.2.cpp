#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <cmath>
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
int sumBeforeMaxElementByAbs(const int* arr, int size) {
	int max_abs = 0;
	int sum = 0;
	int abs_index = 0;
	for (int i = 0; i < size; ++i) {
		auto itr = find(arr, arr + size, max_abs);
		abs_index = distance(arr,itr);
		max_abs = *max_element(arr, arr + size);
		abs(max_abs);
	}
	
	cout << "Max absolute value:" << max_abs << endl;
	for (int i = 0; i < abs_index; ++i) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	const int size = 10;
	int arr[size];
	int* p = init(arr, size);
	printArray(arr, size);
	cout <<"Mult:"<< multOfElementsWithEvenIndexes(arr, size) << endl;
	cout << "Sum:" << sumBeforeMaxElementByAbs(arr, size) << endl;

}