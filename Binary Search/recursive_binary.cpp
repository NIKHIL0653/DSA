#include<bits/stdc++.h>
using namespace std;

int recursiveBinary(int arr[], int low, int high,int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]){
        return recursiveBinary(arr, mid+1,high,target);
    }
    else return recursiveBinary(arr, low,mid-1,target);
}

int main(){
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int result = recursiveBinary(arr,0,n-1,target);
    if(result == -1) cout << "Element not found";
    else cout << "Element found at index " << result;
return 0;
}