#include <iostream>
#include <math.h>
using namespace std;

int sum_gp(int m,int n){
    return (m*(pow(2,n)-1));
}

int max_pow(int b){
    int count=0;
    while(b>0){
        b/=2;
        count++;
    }
    return count-1;
}

int check(int a){
    for(int j=1;;j++){
            for(int k=max_pow(a);k>0;k--){
                if(sum_gp(j,k)==a)
                    return j;
            }
        }
}

int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        cout<<check(x);
    }
    return 0;
}