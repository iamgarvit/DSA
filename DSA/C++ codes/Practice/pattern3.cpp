#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=0;x<(n-i);x++)
            cout<<" ";
        for(int j=k;j<k+i;j++){
            cout<<"*"<<" ";
        }
        k+=i;
        cout<<endl;
    }
}