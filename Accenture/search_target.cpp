#include<bits/stdc++.h>
using namespace std;

// bool search(int arr[], int target, int n){
//     for(int i = 0; i<n;i++){
//         if(arr[i] == target){
//             return true;
//         }
//     }
//     return false;
// }

bool binarySearch(int arr[],int target, int n){
    int l = 0;
    int h = n-1;
    
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid] == target) return true;
        if(arr[mid] < target) l = mid+1;
        else h = mid - 1;
        }
        return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << boolalpha << binarySearch(arr, target,n) << endl;
    return 0;
}