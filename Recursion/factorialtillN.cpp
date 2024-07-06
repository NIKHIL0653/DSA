#include<bits/stdc++.h>
using namespace std;

int facttillN(int n){
    if(n == 0)
    {
        return 1;
    }
    return n * facttillN(n-1); // holds this line and subsequent lines till sumtillN dosent return 0
}

int main(){
    int n;
    cin >> n; 
    cout << facttillN(n);
}