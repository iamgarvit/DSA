#include <bits/stdc++.h>
using namespace std;

int min_val(int arr[],int arr_size){
    int x=arr[0];
    for(int i=0;i<arr_size;i++){
        if(arr[i]<x)
            x=arr[i];
    }
    return x;
}

int max_val(int arr[],int arr_size){
    int x=arr[0];
    for(int i=0;i<arr_size;i++){
        if(arr[i]>x)
            x=arr[i];
    }
    return x;
}

int first_occur(int arr[], int element,int arr_size){
    for(int i=0;i<arr_size;i++){
        if(arr[i]==element)
            return i;
    }
}

int last_occur(int arr[],int element,int arr_size){
    for(int j=arr_size-1;j>=0;j--){
        if(arr[j]==element)
            return j;
    }
}

int steps(int max_index,int min_index,int arr_size){
    if(min_index<max_index)
        return (max_index + arr_size- min_index-2);
    return (max_index + arr_size - min_index -1);
}

int main(){
    int n;
    cin>>n;
    int array1[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        array1[i]=a;
    }
    int max_ind=first_occur(array1,max_val(array1,n),n);
    int min_ind=last_occur(array1,min_val(array1,n),n);
    cout<<steps(max_ind,min_ind,n);
}