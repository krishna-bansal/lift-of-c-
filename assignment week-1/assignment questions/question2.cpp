#include <iostream>

using namespace std;

int main() {
    int num1;

    cout << "Enter a number: ";
    cin >> num1;

    if (num1 > 0) 
    {
        cout << "Inputted number is Positive number" << endl;
    } 
    else if (num1 < 0) 
    {
        cout << "Inputted number is Negative number" << endl;
    } 
    else 
    {
        cout << "Inputted no is Zero" << endl;
    }

    return 0;
}
