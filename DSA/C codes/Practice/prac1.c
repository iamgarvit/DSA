#include <stdio.h>
#define MAXLINE 1000  /*Maximum input length*/

/*Program to find all lines that match given pattern*/

int getline(char line[],int max);
int strindex(char source[],char searchfor[]);

char pattern[] = "ould";

main(){
    char line[MAXLINE];
    int found=0;

    while(getline(line,MAXLINE)>0)
        if(strindex(line,pattern)>=0){
            printf("%s",line);
            found++;
        }
    return found;   
}

int getline(char s[],int lim){    /*get line into s, return length*/
    int c,i;
    i=0;
    while(--lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++]=c;   /*assigns 'c' to current index corresponding to value of i then increments value of i*/
    if(c == '\n')
        s[i++]=c;
    s[i] = '\0';
    return i;
}

int strindex(char s[],char t[]){ /*return index of t in s, -1 if none*/
    int i,j,k;

    for(i=0;s[i]!='\0';i++){
        for (j=i,k=0;t[k]!='\0' && s[j]==t[k]; j++,k++)
        ;
        if(k>0 && t[k]=='\0')
            return i;

    }
    return -1;
}