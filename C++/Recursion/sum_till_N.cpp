// #include<bits/stdc++.h>
// using namespace std;

// void sumtillN(int i, int sum){
//     if(i<1)
//     {
//         cout << sum;
//         return;
//     }
//     else sumtillN(i-1, sum+i);
// }

// int main(){
//     int i;
//     cin >> i;
//     sumtillN(i, 0);
// }

//functional method

#include<bits/stdc++.h>
using namespace std;

int sumtillN(int n){
    if(n == 0)
    {
        return 0; //runs till n = 0
    }
    return n + sumtillN(n-1); // holds this line and subsequent lines till sumtillN dosent return 0
}

int main(){
    int n;
    cin >> n; // made a mistake of not printing the funtion since it returns a value
    cout << sumtillN(n);
}
