#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        if(x<0)
            return false;
        int y=x;
        int rev=0;
        while(y>0){
            rev = rev*10+ y%10;
            y/=10;
        }
        if(rev==x)
            return true;
        return false;
    }

int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<isPalindrome(n);
}