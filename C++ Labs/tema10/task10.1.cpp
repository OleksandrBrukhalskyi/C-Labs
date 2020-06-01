#include<iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include<time.h>
using namespace std;
void init_arr(int* arr, int& size) {
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 21 - 10;
	}
}
void print_arr(int* arr,int& size) {
	for (int i = 0; i < size; ++i) {
		cout << setw(3) << arr[i] << " ";	
	}
	cout << endl;
}
int multOfElementsWithEvenIndexes(int* arr, int &size) {
	int mult = 1;
	for (int i = 0; i < size; ++i) {
		if (i % 2 == 0) {
			mult *= arr[i];
		}
	}
	return mult;
}
int sumBeforeMaxElementByAbs(int* arr, int &size) {
	int max_abs = 0;
	int sum = 0;
	int abs_index = 0;
	for (int i = 0; i < size; ++i) {
		auto itr = find(arr, arr + size, max_abs);
		abs_index = distance(arr, itr);
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
	srand(time(NULL));
	int size;
	cout << "Input size:" << endl;
	cin >> size;
	int* arr = new int [size];
	init_arr(arr, size);
	print_arr(arr, size);
	cout << "Mult:" << multOfElementsWithEvenIndexes(arr, size) << endl;
	cout << "Sum:" << sumBeforeMaxElementByAbs(arr, size) << endl;
	system("pause");
}
