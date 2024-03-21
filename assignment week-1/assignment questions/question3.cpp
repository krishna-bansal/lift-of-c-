#include <iostream>

using namespace std;

int main() {
    int numb;
    int sum = 0;
    
    cout << "Enter a number: ";
    cin >> numb;
    
    int c = numb;
    
    do 
    {
        sum += c % 10;
        c /= 10;
    } 
    while (c != 0);
    
    cout << "The sum of the digits of " << numb << " is: " << sum << endl;
    
    return 0;
}
