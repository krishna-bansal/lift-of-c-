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

void transposeArray(int arr[][COLS], int transpose[][ROWS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main() {
    int array[ROWS][COLS], transpose[COLS][ROWS];

    cout << "Enter elements for the array:" << endl;
    inputArray(array);

    transposeArray(array, transpose);

    cout << "Transpose of the array:" << endl;
    printArray(transpose);

    return 0;
}
