#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int n) {
    if (n == 0) return "0";  // Special case for 0
    
    string res = "";
    while (n > 0) {
        res = (char)('0' + (n % 2)) + res;  // Prepend the bit
        n = n / 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << convert2Binary(n) << endl;
    return 0;
}