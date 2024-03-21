#include <iostream>

using namespace std;

int main() {
    float length_in_cm, length_in_meters, length_in_kilometers;

    cout << "Enter length in centimeters: ";
    cin >> length_in_cm;

    const float meters_per_cm = 0.01;
    const float kilometers_per_cm = 0.00001;

    length_in_meters = length_in_cm * meters_per_cm;
    length_in_kilometers = length_in_cm * kilometers_per_cm;

    cout << "Length in meters: " << length_in_meters << " m" << endl;
    cout << "Length in kilometers: " << length_in_kilometers << " km" << endl;

    return 0;
}
