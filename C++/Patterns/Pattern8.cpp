#include<iostream>
using namespace std;

void pattern8(int n){
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<i;j++)
        {
            cout << " "; //space
        }

        for(int j = 0; j<n*2 - (2*i + 1); j++)
        {
            cout << "*"; //star
        }

        for(int j = 0; j<i;j++)
        {
            cout << " "; //space
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern8(n);
}