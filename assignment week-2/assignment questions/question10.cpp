#include <iostream>
#include <cctype>
using namespace std;

void countCharacters(const string& str, int& alphabets, int& digits, int& specialChars) {
    alphabets = 0;
    digits = 0;
    specialChars = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            alphabets++;
        } else if (isdigit(ch)) {
            digits++;
        } else {
            specialChars++;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int numAlphabets, numDigits, numSpecialChars;
    countCharacters(input, numAlphabets, numDigits, numSpecialChars);

    cout << "Number of alphabets: " << numAlphabets << endl;
    cout << "Number of digits: " << numDigits << endl;
    cout << "Number of special characters: " << numSpecialChars << endl;

    return 0;
}
