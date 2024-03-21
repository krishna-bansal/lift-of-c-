#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Product: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Quotient: " << num1 / num2 << endl;
            } else {
                cout << "Cannot divide by zero!" << endl;
            }
            break;
        case '%':
            if (num2 != 0) {
               cout << "Modulus: " << (int)num1 % (int)num2 << endl;
            } else {
                cout << "Cannot find modulus when divisor is zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
