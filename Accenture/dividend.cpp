#include<bits/stdc++.h>
using namespace std;

int dividend(int arr[], int n,int div, int quo,int rem){
    if(n == 0) return -1;

    int dividend;
    dividend = quo*div + rem;

    for(int i = 0;i<n;i++){
        if(arr[i] == dividend) return i;
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin >> arr[i];
    }
    int div,quo,rem;
    cin >> div >> quo >> rem;
    cout << dividend(arr,n,div,quo,rem);
    return 0;
}