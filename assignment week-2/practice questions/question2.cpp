#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int decimal) {
    vector<int> binaryDigits;
    
    while (decimal > 0) {
        binaryDigits.push_back(decimal % 2);
        decimal /= 2;
    }

    cout << "Binary representation: ";
    for (int i = binaryDigits.size() - 1; i >= 0; i--) {
        cout << binaryDigits[i];
    }
    cout << endl;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);

    return 0;
}
