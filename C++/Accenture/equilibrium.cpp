#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
    int rsum = 0;
    int lsum = 0;

    // find out sum of entire array
    //  and store it in rsum
    for (int i = 0; i < n; i++)
    {
        rsum += arr[i];
    }
    // Now we traverse through all the elements of the array
    // and substract current element from rsum value

    for (int i = 0; i < n; i++)
    {
        rsum -= arr[i];
        if (rsum == lsum)
            return i;
        lsum += arr[i];
    }

    return -1;
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
    cout << equilibrium(arr, n) << endl;
    return 0;
}