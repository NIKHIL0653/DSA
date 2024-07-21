// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int maxi = INT_MIN;
//         int prod = 1;
//         for(int i=0;i<nums.size();i++){
//             prod *= nums[i];
//             maxi = max(prod,maxi);
//             if(prod == 0)
//             prod = 1;
//         }
//         prod = 1;
//         for(int i=nums.size()-1;i>=0;i--){
//             prod *=nums[i];
            
//             maxi = max(prod,maxi);
//             if(prod == 0)
//             prod = 1;
//         }
//         return maxi;
//     }
// };


#include<bits/stdc++.h>
using namespace std;

int maxprod(int arr[],int n){
    int maximum=INT_MIN;
    int prefix = 1;
    int suffix = 1;
    for(int i=0;i<n;i++){
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix =1;
        prefix *=arr[i];
        suffix *=arr[n-i-1];
        int maximum = max(maximum,prefix,suffix);
    }
    return maximum;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int answer = maxprod(arr,n);
    cout << answer << endl;
}