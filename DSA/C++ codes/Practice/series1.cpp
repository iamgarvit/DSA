#include <iostream>
#include <math.h>
using namespace std;

int fac(int n){
    if(n==0 || n==1)
        return 1;
    int a=1;
    for(int i=1;i<=n;i++)
        a*=i;
    return a;
}

int main(){
    double x,n,sum=0;
    cin>>x;
    cin>>n;
    for(double i=0;i<n;i++){
        sum+=(pow(x,i))/fac(i);
    }
    cout<<sum;
    return 0;
}