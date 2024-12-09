// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int a[], int l, int r){;
//     if(l > r) return;
//     swap(a[l], a[r]);
//     reverse(l+1, r-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) cin >> a[i];
//     reverse(0, n-1);
//     for(int i = 0; i < n; i++) cout << a[i] << " ";
// }

//reversing with one pointer instead of 2

#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int a[], int n){;
    if(i >= n/2) return;
    swap(a[i], a[n-i-1]);
    reverse(i+1, a, n);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    reverse(0, a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}