#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float radius;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate diameter
    float diameter = 2 * radius;
    
    // Calculate circumference
    float circumference = 2 * M_PI * radius;
    
    // Calculate area
    float area = M_PI * pow(radius, 2);
    
    cout << "Diameter of the circle: " << diameter << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;
    
    return 0;
}
