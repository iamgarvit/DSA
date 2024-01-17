#include <bits/stdc++.h>
using namespace std;

int main(){
    int time_current,time_duration,cur_hour,cur_min,dur_hour,dur_min;
    cin>>time_current>>time_duration;
    cur_hour=time_current/100;
    cur_min=time_current%100;
    dur_hour=time_duration/100;
    dur_min=time_duration%100;
    
    int time_after,after_hour,after_min,carry=0;
    after_min=(cur_min+dur_min)%60;
    carry=(cur_min+dur_min)/60;
    after_hour=(cur_hour+dur_hour+carry)%24;
    time_after=100*after_hour+after_min;
    cout<<"The time "<<time_duration<<" after "<<time_current<<" is "<<time_after;
    return 0;
}