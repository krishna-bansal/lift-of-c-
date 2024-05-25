#include <iostream>
using namespace std;

void rearrangeArray(int arr[], int len) {
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] < 0) {
            if (i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* array = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    rearrangeArray(array, size);

    cout << "Array after moving negative elements to one side: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
    return 0;
}
