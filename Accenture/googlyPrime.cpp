#include<bits/stdc++.h>
using namespace std;

string googly(int n){
    if (n == 0 || n == 1) return "Not Prime";

    int sum = 0;

    while(n>0){
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }

    if((sum % 2) != 0) return "Is Prime";
    else return "Not Prime";
}

int main(){
    int n;
    cin >> n;

    cout << googly(n);
    return 0;
}