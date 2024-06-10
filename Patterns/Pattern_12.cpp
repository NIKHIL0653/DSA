#include <iostream>
using namespace std;

void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j; // nums
        }

        for (int j = 1; j <= space; j++)
        {
            cout << " "; // space
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j; // nums
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern12(n);
}