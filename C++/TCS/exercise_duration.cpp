#include<bits/stdc++.h>
using namespace std;

int main(){
    int days = 7;
    int duration[days];
    int total_duration = 0;
    int average_duration;

    for(int i = 0; i<days;i++){
        cout << "Day " << (i + 1) << " exercise duration:";
        cin >> duration[i];
        total_duration += duration[i];
    }

    average_duration = (double)(total_duration)/ days;
    average_duration = round(average_duration * 100)/100;

    cout << total_duration << endl;
    cout << average_duration;

return 0;
}