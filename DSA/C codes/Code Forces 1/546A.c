#include <stdio.h>

main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    if(n>=(k*w*(w+1)/2))
        printf("%d",0);
    else
        printf("%d",(k*w*(w+1)/2)-n);
}