#include <iostream>
using namespace std;

int main(){
    int n,k=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=k;j<k+i;j++){
            cout<<j<<" ";
        }
        k+=i;
    }
}