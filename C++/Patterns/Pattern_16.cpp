#include<iostream>
using namespace std;

void pattern16(int n){
    for(int i=0;i<n;i++){
          
          for(int j=0;j<n-i-1;j++){
              cout<<" "; //space
          }

          char ch = 'A';
          int breakpoint = (2*i+1)/2;  //chars  
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++; 
              else ch--;
          }

          for(int j=0;j<n-i-1;j++){ //space
              cout<<" ";
          }
          cout<<endl;
          
      }
}

int main(){
    int n;
    cin >> n;
    pattern16(n);
}