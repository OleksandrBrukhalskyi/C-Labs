#include <iostream>
#include <time.h>
using namespace std;
void replaceMinAndMaxElementsInMatrix(int arr[5][5], const int size = 5) {
    int maxI = 0, maxJ = 0, minI = 0, minJ = 0;
    int low = -1, high = 5;
    srand(time(0));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = low + rand() % high;
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[maxI][maxJ] < arr[i][j])
            {
                maxI = i;
                maxJ = j;
            }

            if (arr[minI][minJ] > arr[i][j])
            {
                minI = i;
                minJ = j;
            }
        }
    }

    cout << "Before replacing" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
    }

    int tmp = arr[maxI][maxJ];
    arr[maxI][maxJ] = arr[minI][minJ];
    arr[minI][minJ] = tmp;

    cout << "After replacing" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
    }
}
int main() {
    const int m = 5;
    const int n = 5;
    int arr[m][n];
    replaceMinAndMaxElementsInMatrix(arr);
}
