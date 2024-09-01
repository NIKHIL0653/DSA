#include<bits/stdc++.h>
using namespace std;

int roof(int arr[],int n){
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] != 0 && arr[i]%3 == 0) cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

    cout << roof(arr, n);
    return 0;
}