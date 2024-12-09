#include<bits/stdc++.h>
using namespace std;

bool primeNum(int num){
    if(num <= 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
}
return true;
}

int main(){
    int num;
    cin >> num;
    cout << boolalpha << primeNum(num) << endl;
    return 0;
}
