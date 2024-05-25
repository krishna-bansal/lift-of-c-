#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void inputArray(int arr[][COLS]) {
    cout << "Enter elements of the array (3x3):" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][COLS]) {
    cout << "Array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void sumArrays(int arr1[][COLS], int arr2[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int array1[ROWS][COLS], array2[ROWS][COLS], sum[ROWS][COLS];

    cout << "Enter elements for first array:" << endl;
    inputArray(array1);

    cout << "Enter elements for second array:" << endl;
    inputArray(array2);

    sumArrays(array1, array2, sum);

    cout << "Sum of the two arrays:" << endl;
    printArray(sum);

    return 0;
}
