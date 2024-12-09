#include <bits/stdc++.h>
using namespace std;

int stockLoss(int arr[], int n)
{
    if(n==0 || n == 1) return 0;

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << stockLoss(arr, n);
    return 0;
}