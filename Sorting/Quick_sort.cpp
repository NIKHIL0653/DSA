#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
    }
}

void quicksort(int arr[], int low, int high)
{
    if(low < high){
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i <n;i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    }
return 0;
}