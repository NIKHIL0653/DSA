#include<iostream>
#include<string>
using namespace std;

int count_nums(int n){
    int count = 0;
    while(n>0)  // performing the modulo operation till no interger part is left to return
    {
        int lastdigit = n%10; // getting the last digit 
        count = count + 1; // counter increments till n becomes 0
        n = n/10; // divides the current number by 10 and returns integer part for next loop run
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int value = count_nums(n);
    cout << value;
}

// Alternate method

//int cnt = (int)(log10(n)+1); if it is a 4 digit num ans will be 
//somewhere 3-4 typecasting it gives lowest nearest number here 3 and adding 1 gives 4 which is the answer