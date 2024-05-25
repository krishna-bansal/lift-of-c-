#include <iostream>
#include <cctype>
using namespace std;

void countVowelsAndConsonants(const string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    for (char ch : str) {
        if (isalpha(ch)) {
            ch = tolower(ch); // Convert to lowercase for case-insensitive comparison
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int numVowels, numConsonants;
    countVowelsAndConsonants(input, numVowels, numConsonants);

    cout << "Number of vowels: " << numVowels << endl;
    cout << "Number of consonants: " << numConsonants << endl;

    return 0;
}
