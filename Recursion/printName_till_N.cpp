#include<iostream>
using namespace std;

void Names(int i, int N){
    if(i>N) return;
    else cout << "Nikhil" << endl;
    Names(i+1, N);
}

int main(){
    int N;
    cin >> N;
    Names(1, N);
}