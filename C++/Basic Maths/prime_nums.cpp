// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//         if(n%1 == 0 && n%n == 0)
//         cout << "It is a prime number";
//         else 
//         cout << "It is not a prime number";
// }

                                
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Function to check if a
// given number is prime.
bool checkPrime(int n){ 
     // Initialize a counter variable to
    // count the number of factors.
    int cnt = 0;
    // Loop through numbers from 1 to n.
    for(int i = 1; i<=n; i++){ 
        // If n is divisible by i
        // without any remainder.
        if(n%i ==0){ 
             // Increment the counter.
            cnt = cnt+1;
        }
    }

     // If the number of
     // factors is exactly 2
    if(cnt==2){
         // Return true, indicating
         // that the number is prime.
        return true;
    }
    // If the number of
    // factors is not 2.
    else{ 
        // Return false, indicating
        // that the number is not prime.
        return false; 
    }
}

int main() {
    int n;
    cin >> n;
    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
                                
                            