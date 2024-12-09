#include<bits/stdc++.h>
using namespace std;

int second(int arr[], int n){
    if(n == 0) return 0;

    int secondLargest;

    for(int i = n - 2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            secondLargest = arr[i];
            break;
        }
    }

    int cnt;
    for(int i = 0; i<n;i++){
        if(arr[i] == secondLargest) cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    cout << second(arr, n);
    return 0;
}