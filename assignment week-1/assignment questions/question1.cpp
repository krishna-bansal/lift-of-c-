#include <iostream>

using namespace std;

int main() 
{
    for (int num1 = 1; num1 <= 100; ++num1) 
    {
        //if number is divisible by both 3 and 5
        if (num1 % 3 == 0 && num1 % 5 == 0)
        {
            cout << "FizzBuzz ";
        } 
        //if number is divisible by only 3
        else if (num1 % 3 == 0) 
        {
            cout << "Fizz ";
        } 
        //if number is divisible by only 5
        else if (num1 % 5 == 0) 
        {
            cout << "Buzz ";
        } 
        else 
        {
            cout << num1 << " ";
        }
    }
    return 0;
}
