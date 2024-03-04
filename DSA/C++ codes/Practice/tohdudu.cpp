#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, string start,string aux, string dest){
    if(n==0)    return;
    TowerOfHanoi(n-1, start,dest, aux);
    cout<<start<<" -> "<<dest<<"\n";
    TowerOfHanoi(n-1, aux, start, dest);
}

int main(){
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    clock_t start, end;
    start = clock();
    TowerOfHanoi(n,"T1","T2","T3");
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}