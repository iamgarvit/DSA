#include <bits/stdc++.h>
using namespace std;

int main(){
    int time,hours,minutes,seconds;
    cin>>time;
    hours=time/3600;
    minutes=(time-(3600*hours))/60;
    seconds=((time-(3600*hours)-(60*minutes)));
    cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds ";
}