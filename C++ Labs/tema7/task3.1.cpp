// C++ Labs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int findMinNumByEvenIndex(const int* arr, int size) {
    int min = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0 || i % 2 == 0) {
            min = arr[i];
        }
    }
    return min;
}
int main()
{   
    const int size = 5;
    int arr[size] = {13,7,12,14,7};
    int res = findMinNumByEvenIndex(arr, size);
    cout << res << endl;
}

