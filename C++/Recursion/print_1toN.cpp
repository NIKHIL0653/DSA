// #include<bits/stdc++.h>
// using namespace std;

// void printnums(int n)
// {
//     int cnt = 1;
//     if (cnt != n)
//     return;

//     cout << n << " ";
//     cnt++;
//     printnums(n);
// }

// int main(){
//     int n;
//     cin >> n;
//     printnums(n);
// }

#include<bits/stdc++.h>
using namespace std;

void printnums(int n, int counter = 1)
{
    if (counter <= n) {
        cout << counter << " "; // Print the current counter value
        printnums(n, counter + 1); // Recursive call with incremented counter
    }
}

int main(){
    int n;
    cin >> n;
    printnums(n);
    return 0;
}