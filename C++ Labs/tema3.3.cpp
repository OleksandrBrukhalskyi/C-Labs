#include<iostream>
#include <time.h>
#include<stdlib.h>
#include <iomanip>
using namespace std;

const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;

int** init_matrix(unsigned int dim1, unsigned int dim2) {
    int** matrix = new int* [dim1];
    for (int i = 0; i < dim1; i++) {
        matrix[i] = new int[dim2];
    }
    return  matrix;
}
void matrix_destroyer(int** matrix, unsigned int dim1) {
    for (int i = 0; i < dim1; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
int main() {
    int** matrix;

    // создание массива
    matrix = init_matrix(DIM1, DIM2);

    // использование
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            matrix[i][j] = (i + 1) * 10 + (j + 1);
            cout << setw(4) << matrix[i][j];
        }
    }

    // уничтожение
    matrix_destroyer(matrix, DIM1);
}