#include <iostream>

using namespace std;

int main() {
    float angle1, angle2, angle3;

    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    // Check if the sum of angles is 180 degrees
    if (angle1 + angle2 + angle3 == 180 && (angle1 > 0 && angle2 > 0 && angle3 > 0)) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}
