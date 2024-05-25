#include <iostream>
using namespace std;

int main() {
    int firstSize, secondSize;
    
    cout << "Enter the size of the first array: ";
    cin >> firstSize;
    int* firstArray = new int[firstSize];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < firstSize; i++) {
        cin >> firstArray[i];
    }
    
    cout << "Enter the size of the second array: ";
    cin >> secondSize;
    int* secondArray = new int[secondSize];
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < secondSize; i++) {
        cin >> secondArray[i];
    }
    
    int mergedSize = firstSize + secondSize;
    int* mergedArray = new int[mergedSize];
    
    for (int i = 0; i < firstSize; i++) {
        mergedArray[i] = firstArray[i];
    }
    
    for (int i = 0; i < secondSize; i++) {
        mergedArray[firstSize + i] = secondArray[i];
    }
    
    cout << "Merged array in reverse order: ";
    for (int i = mergedSize - 1; i >= 0; i--) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    
    delete[] firstArray;
    delete[] secondArray;
    delete[] mergedArray;
    
    return 0;
}
