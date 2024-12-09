#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for (int i = n-1; i >= 0; i--){
        int countSwap =0;
        for(int j = 0; j <=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                countSwap = 1;
            }
        }
        if(countSwap == 0) break;
        cout << "runs\n";
    }
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    bubble(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

// #include<bits/stdc++.h>
// using namespace std;

// void bubble(int arr[], int n){
//     for (int i = 0; i < n-1; i++){ // changed from i = n-1 to i = 0
//         for(int j = 0; j < n-i-1; j++){ // changed from j <= i-1 to j < n-i-1
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n;i++){
//         cin >> arr[i];
//     }
//     bubble(arr, n);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }