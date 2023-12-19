#include <iostream>

int main(){
    int n,k;
    std::cin>>n>>k;
    while(k>0){
        if(n%10!=0){
            n-=1;
            k-=1;
        }
        else{
            n/=10;
            k-=1;
        }
    }
    std::cout<<n;
    return 0;
}