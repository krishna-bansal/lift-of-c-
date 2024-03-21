#include <iostream>

using namespace std;

int main() 
{
    float side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) 
    {
        cout << "It is an equilateral triangle." << endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) 
    {
        cout << "It is an isosceles triangle." << endl;
    }
    else 
    {
        cout << "It is a scalene triangle." << endl;
    }

    return 0;
}
