#include<bits/stdc++.h>
using namespace std;

string decode(string str){
    if (str.length() == 0) return 0;

    int cnt = 0;
    string ans = "";

    for(int i = 0; i<str.length();i++){
        if(str[i] == '1') cnt++;
        else{
            if(cnt>0){
                ans += (char)(64+cnt);
                cnt = 0;
            }
        }   
    }
    if(cnt > 0){
        ans += (char)(64+cnt);
    }
    return ans;
}

int main(){
    string str;
    cin >> str;

    cout << decode(str);
    return 0;
}
