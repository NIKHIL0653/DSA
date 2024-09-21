#include <iostream>
#include <string>

using namespace std;

string decodeString(string str) {
    int n = str.length();

    for (int i = 0; i < n; i++) {
        str[i] = 'z' - (str[i] - 'a');
    }

    return str;
}

int main() {
    string inputString;

    cout << "Enter a string to decode: ";
    getline(cin, inputString);

    string decodedString = decodeString(inputString);

    cout << "Decoded string: " << decodedString << endl;

    return 0;
}

