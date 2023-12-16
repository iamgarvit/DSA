#include <stdio.h>

main(){
    int a,b;
    b=1;
    printf("Enter a number : ");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        b=b*i;
    }
    printf("\nThe factorial of %d is %d.",a,b);
}