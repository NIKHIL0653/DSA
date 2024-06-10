#include <iostream>
using namespace std;

// void pattern7(int n)
// {
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0 ; j<i*2+1; j++)
//         {
//             cout << " " << "*" << " ";
//         }
//         cout << endl;
//     }
// }

void pattern7(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n-i-1;j++)
        {
            cout << " "; //space
        }

        for(int j= 0; j<i*2+1; j++)
        {
            cout << "*"; //star
        }

        for(int j = 0; j<n-i-1;j++)
        {
            cout << " "; //space
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern7(n);
}