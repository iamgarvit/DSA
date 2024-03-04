#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, string start,string aux1,string aux2, string dest){
    if(n==0)    return;
    TowerOfHanoi(n-1, start, aux2 , dest, aux1);
    cout<<start<<" to "<<dest<<"\n";
    TowerOfHanoi(n-1, aux1, start, aux2, dest);
}

int main(){
    int n=3;
    TowerOfHanoi(n,"T1","T2","T3","T4");
}