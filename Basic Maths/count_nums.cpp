#include<iostream>
#include<string>
using namespace std;

int count_nums(int n){
    int count = 0;
    while(n>0)  //to iterate over digits and return value of count
    {
        int lastdigit = n%10;
        count = count + 1;
        n = n/10;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int value = count_nums(n);
    cout << value;
}