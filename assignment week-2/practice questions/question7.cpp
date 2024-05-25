#include <iostream>
#include <unordered_map>
using namespace std;

int findMostFrequent(int arr[], int size) {
    unordered_map<int, int> frequency;
    int mostFrequent = arr[0];

    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > frequency[mostFrequent]) {
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 1) {
        cout << "Array size must be at least 1." << endl;
        return 1;
    }

    int* array = new int[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int mostFrequent = findMostFrequent(array, size);
    cout << "The most frequent element is: " << mostFrequent << endl;

    delete[] array;

    return 0;
}
