#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n){
    int maxSum = INT_MIN;
    int sum =0;
    for(int i = 0; i< n;i++){
        sum += arr[i];
        if(sum > maxSum){  // kadane's algo
            maxSum = sum;
    }
    if(sum < 0){
        sum = 0;
    }
}
return maxSum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin >> arr[i];
    }
    int ans = maxSubarray(arr, n);
    cout << ans << endl;
    return 0;
}
