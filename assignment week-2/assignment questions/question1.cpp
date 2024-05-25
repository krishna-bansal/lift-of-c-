#include <iostream>
using namespace std;

int countOccurrences(int* sequence, int length, int target) {
    int tally = 0;
    for (int i = 0; i < length; ++i) {
        if (sequence[i] == target) {
            ++tally;
        }
    }
    return tally;
}

int main() {
    int capacity;
    cout << "Enter the size of the array: ";
    cin >> capacity;

    int* collection = new int[capacity];
    cout << "Enter the elements of the array: ";
    for (int j = 0; j < capacity; ++j) {
        cin >> collection[j];
    }

    int value;
    cout << "Enter the number to count: ";
    cin >> value;

    int frequency = countOccurrences(collection, capacity, value);
    cout << "The number " << value << " occurs " << frequency << " times in the array." << endl;

    delete[] collection;
    return 0;
}
