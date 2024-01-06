#include <bits/stdc++.h>
using namespace std;

int notes(int money,int count=0){
    if(money==100 || money==20 ||money==10 || money==5 || money==1)
        return count+=1;
    if(money>100)
        return(notes(money%100,count+=money/100));
    if(money>20)
        return(notes(money%20,count+=money/20));
    if(money>10)
        return(notes(money%10,count+=money/10));
    if(money>5)
        return(notes(money%5,count+=money/5));
    return(count+=money);
}

int main(){
    int n;
    cin>>n;
    cout<<notes(n);
}