#include <bits/stdc++.h>
using namespace std;

int max(int arr1[]){
    int max_val=arr1[0];
    for(int i=0;i<10;i++){
        if(arr1[i]>max_val)
            max_val=arr1[i];
    }
    return max_val;
}

int min(int arr2[]){
    int min_val=arr2[10];
    for(int i=0;i<10;i++){
        if(arr2[i]<min_val)
            min_val=arr2[i];
    }
    return min_val;
}

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    cout<<"The maximum number is : "<<max(arr)<<"\n"<<"The minimum value is : "<<min(arr)<<"\n";
    return 0;
}