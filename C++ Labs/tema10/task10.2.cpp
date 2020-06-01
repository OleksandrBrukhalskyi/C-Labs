#include<iostream>
#include<iomanip>
#include <time.h>
using namespace std;

void init_matrix(int** arr, int& rows, int& cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arr[i][j] = rand() % 21 + 1;
		}
	}
}
void print_matrix(int** arr, int& rows, int& cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int min_el = 9999, max_el = -9999;
void maxAndMinElements(int** arr, int& rows, int& cols) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] > max_el) {
				max_el = arr[i][j];
			}
			if (arr[i][j] < min_el) {
				min_el = arr[i][j];
			}
		}
	}
	cout << "Max:" << max_el << endl;
	cout << "Min:" << min_el << endl;
}
double avgOfMaxAndMinElements(int** arr, int& rows, int& cols) {
	int counter = 0;
	double sum = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] == max_el || arr[i][j] == min_el) {
				++counter;
				sum += arr[i][j];
			}
		}
	}
	return sum / counter;
}
int main() {
	srand(time(NULL));
	int rows, cols;
	cout << "Input rows:" << endl;
	cin >> rows;
	cout << "Input cols:" << endl;
	cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];
	}
	init_matrix(arr, rows, cols);
	print_matrix(arr, rows, cols);
	maxAndMinElements(arr, rows, cols);
	cout << "Average:" << avgOfMaxAndMinElements(arr, rows, cols) << endl;
}
