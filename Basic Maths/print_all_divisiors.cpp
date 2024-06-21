// #include<iostream>
// using namespace std;

// void divisiors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0) cout<<i<<" ";
//         }
//         cout << endl;
// }                            // Brute Force Method

// int main(){
//     int n;
//     cin>>n;
//     divisiors(n);
//     }

// Optimal Method

#include<bits/stdc++.h>
using namespace std;

void printdivisors(int n){
    vector<int> ls;
    for(int i=1; i<sqrt(n);i++)
    {
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());  // since the numbers will not be in order we sort them
    for(auto it : ls) cout << it << " "; // printing them by iterating through the list
}

int main()
{
    int n;
    cin >> n;
    printdivisors(n);
}