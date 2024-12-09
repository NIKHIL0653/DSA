#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int N){
    if(N == 0 || N == 1) return 1;
    int prev = 0;
    int next = 1;
    int ans;
    
    for(int i =2;i<N;i++){
        ans = prev + next;
        prev = next;
        next = ans;
    }
    return ans;
}

int main(){
    int N;
    cin >> N;
    cout << Fibonacci(N);
    return 0;
}