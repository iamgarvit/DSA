#include <bits/stdc++.h>
using namespace std;

int main(){
    float cm,inch;
    int feet;
    cin>>cm;
    inch=cm/2.54;
    feet=inch/12;
    inch=(inch-12*feet);
    printf("%d feet %.1f inch",feet,inch);
}