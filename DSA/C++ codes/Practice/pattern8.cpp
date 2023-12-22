#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int x=0;x<2*(n-i)-2;x++)
            cout<<" ";
        int y=pow(11,i);
        while(y>0){
            if(y%10==0)
                cout<<1<<"   ";
            else
                cout<<y%10<<"   ";
            y/=10;
        }
        cout<<endl;
    }
}
// tested for n=4