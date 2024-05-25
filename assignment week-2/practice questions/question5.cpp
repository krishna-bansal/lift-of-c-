#include <iostream>
#include <string>
using namespace std;

string removeNonAlphabets(const string& str) {
    string result = "";
    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeNonAlphabets(input);

    cout << "String with only alphabets: " << result << endl;

    return 0;
}
