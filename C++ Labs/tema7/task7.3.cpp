#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void init_natrix(int** array, const int& rows, const int& columns) {
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			array[i][j] = rand() % 21 - 10;
		}
	}
}
void sort_matrix(int** array, const int& rows, const int& columns) {
	for (int j = 0; j < columns; ++j) {
		for (int i = 0; i < rows; ++i) {
			for (int sub_i = i; sub_i < rows; ++sub_i) {
				if (array[i][j] < array[sub_i][j])
					swap(array[i][j], array[sub_i][j]);
			}
		}
	}
}
int main() {
	srand(time(NULL));
	int rows = 3, columns = 3;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new int[columns];
	}
	init_natrix(matrix, rows, columns);

	cout << "Matrix" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << setw(3) << setfill(' ') << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	cout << "Sorted matrix" << endl;
	sort_matrix(matrix, rows, columns);
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << setw(3) << setfill(' ') << matrix[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < rows; ++i) {
		delete[]matrix[i];
	}
	delete[]matrix;
		
}
