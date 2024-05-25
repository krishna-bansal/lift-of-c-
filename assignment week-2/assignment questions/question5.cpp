#include <iostream>
using namespace std;

int main() {
    int sourceSize;
    
    cout << "Enter the size of the source array: ";
    cin >> sourceSize;
    
    int* sourceArray = new int[sourceSize];
    cout << "Enter the elements of the source array: ";
    for (int i = 0; i < sourceSize; i++) {
        cin >> sourceArray[i];
    }
    
    int* destinationArray = new int[sourceSize];
    for (int i = 0; i < sourceSize; i++) {
        destinationArray[i] = sourceArray[i];
    }
    
    cout << "Elements of the destination array: ";
    for (int i = 0; i < sourceSize; i++) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;
    
    delete[] sourceArray;
    delete[] destinationArray;
    
    return 0;
}
