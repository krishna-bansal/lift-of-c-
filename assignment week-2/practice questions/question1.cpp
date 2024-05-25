#include <iostream>
#include <cmath>
using namespace std;

int calculateDigits(int num) {
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int digits = calculateDigits(num);
    int sum = 0;
    
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
