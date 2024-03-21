#include <iostream>

using namespace std;

int main() {
    float marks[5];
    float total = 0, average, percentage;

    cout << "Enter marks of five subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / (5 * 100)) * 100;

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
