#include <iostream>
using namespace std;

int check(int y,int c1=0){
    if((y/3)%3!=0)
        return c1+1;
    else
        return check(y/3,c1+1);
}

int func(int a,int c=0){
    if(a==1)
        return c;
    if(a%3==0)
        return c+check(a,c)+1;
    return -1;
}

int func1(int m,int c2=0){
    if(m==1)
        return c2;
    if(m%6==0)
        return func1(m/6,c2+1);
    else    
        return func(m,c2);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cout<<func1(x)<<endl;
        }
    return 0;
}