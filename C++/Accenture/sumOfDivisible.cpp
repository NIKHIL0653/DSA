#include<bits/stdc++.h>
using namespace std;

int calculate(int n, int m){
    int sum = 0;
    for(int i = n; i <= m; i++){
        if(i%3 == 0 && i%5 == 0){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << calculate(n,m);
    return 0;
}