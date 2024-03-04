#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi3(int n, string start, string dest, string aux){
    if(n==0)    return;
    TowerOfHanoi3(n-1, start, aux, dest);
    cout<<start<<" to "<<dest<<"\n";
    TowerOfHanoi3(n-1,aux,dest,start);
}

void TowerOfHanoi4(int n, string start,string aux1,string aux2, string dest){
    cout<<start<<" to "<<aux1<<"\n";
    TowerOfHanoi3(n-1, start,dest,aux2);
    cout<<aux1<<" to "<<dest<<"\n";
    return;
}   

int main(){
    int n=3;
    TowerOfHanoi4(n,"T1","T2","T3","T4");
}