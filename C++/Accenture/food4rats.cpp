#include <bits/stdc++.h>
using namespace std;

int houses(int arr[], int n, int r, int unit)
{
    int food = 0;
    int reqFood = r * unit;

    if (n == 0)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        food += arr[i];
        if (food >= reqFood)
        {
            return i + 1;
        }
    }
}

int main()
{
    int n, r, unit;
    cin >> n >> r >> unit;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = houses(arr, n, r, unit);
    cout << ans << endl;
    return 0;
}