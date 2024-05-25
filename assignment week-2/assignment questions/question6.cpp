#include <iostream>
#include <unordered_map>
using namespace std;

int findMaxOccurring(int arr[], int len) {
    unordered_map<int, int> freqMap;
    for (int i = 0; i < len; i++) {
        freqMap[arr[i]]++;
    }

    int maxCount = 0;
    int maxElement = arr[0];
    for (const auto& pair : freqMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxElement = pair.first;
        }
    }

    return maxElement;
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

    int maxOccurringElement = findMaxOccurring(array, size);
    cout << "The maximum occurring element is: " << maxOccurringElement << endl;

    delete[] array;
    return 0;
}
