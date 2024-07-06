#include<bits/stdc++.h>
using namespace std;

void printNto1(int N){
    if (N == 0) return;
    else cout << N << endl;
    printNto1(N-1);
}

int main(){
    int N;
    cin >> N;
    printNto1(N);
}