#include <iostream>
using namespace std;

int ans(int x,int y){
    if(y>x)
        return ans(y,x);
    if((x-y)%10==0)
        return (x-y)/10;
    return ((x-y)/10)+1;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cout<<ans(a,b)<<endl;
    }
}
