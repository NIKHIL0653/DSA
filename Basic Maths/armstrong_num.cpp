#include<iostream>
using namespace std;

// int armstrong(int n){
//     int sum = 0, duplicate = n;
//     while(n!=0){
//         int ld = n % 10;
//         sum = sum + (ld*ld*ld); // approached by creating a function
//         n = n / 10;              // but didnt make it a bool function for validation
//     }
//     return sum == duplicate;
// }

int main(){
    int n;
    cin >> n;
    int sum = 0, duplicate = n;
    while(n!=0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld); // direct approach
        n = n / 10;
    }
    cout << sum;
    if (sum == duplicate) cout << " is Armstrong Number";
    else cout << " is not Armstrong Number";
}

// #include<iostream>
// using namespace std;

// bool armstrong(int n){
//     int sum = 0, duplicate = n;
//     while(n!=0){
//         int ld = n % 10;
//         sum = sum + (ld*ld*ld); // correct bool function
//         n = n / 10;
//     }
//     return sum == duplicate;
// }

// int main(){
//     int n;
//     cin >> n;
//     if(armstrong(n)) cout << n << " is an Armstrong Number";
//     else cout << n << " is not an Armstrong Number";
//     return 0;
// }