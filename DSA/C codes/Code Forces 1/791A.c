#include <stdio.h>

main(){
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a*=3;
        b*=2;
        count++;
    }
    printf("%d",count);
}