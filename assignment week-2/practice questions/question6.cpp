#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array size must be at least 2." << endl;
        return 1;
    }

    int* array = new int[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int secondSmallest = findSecondSmallest(array, size);
    cout << "The second smallest element is: " << secondSmallest << endl;

    delete[] array;

    return 0;
}
