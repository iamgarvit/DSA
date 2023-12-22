#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int x=0;x<(n-i);x++)
            cout<<" ";
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int a=0;a<(n-i);a++)
            cout<<" ";
        for(int j=0;j<2*i-1;j++)
            cout<<"*";
        cout<<endl;
    }
}