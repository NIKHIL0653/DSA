#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int duplicate = n;
    int rev_num = 0;

    while(n!=0){
    int last_digit = n % 10;
    rev_num = (rev_num * 10) + last_digit;
    n = n/10;
    }

    cout << rev_num;

    if(rev_num == duplicate && rev_num > 0) cout << " true";
    else cout << " false"; //made a mistake that i need to store the initial number
    // in another variable as aduplicate for comarision later and not (rev_num == n) since n changed after loop
}


// class Solution {
// public:
//     bool isPalindrome(int n) {
//     if(n<0) return false;

//     int duplicate = n;
//     int rev_num = 0;

//     while(n!=0){
//     int last_digit = n % 10;
//     rev_num = (rev_num * 10) + last_digit;
//     n = n/10;
//     }

//     return rev_num;
//     }
// };


//Leetcode Solution

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if (x < 0)
//             return false;
//         long reversed = 0;
//         int y = x;
//         while (y) {
//             reversed = reversed * 10 + y % 10;
//             y /= 10;
//         }
//         return reversed == x;
//     }
// };