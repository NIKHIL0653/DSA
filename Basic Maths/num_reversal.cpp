#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int rev_num = 0;

    while(n!=0){
    int last_digit = n % 10;
    rev_num = (rev_num * 10) + last_digit;
    n = n/10;
    }

    cout << rev_num;
}

// Leetcode Solution

// class Solution {
// public:
//     int reverse(int x) {
//         long ans = 0;
//         while (x) {
//             ans = ans * 10 + x % 10;
//             x /= 10;
//         }
//         return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
//     }
// };