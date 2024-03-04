#include <bits/stdc++.h>
using namespace std;

int insertion_sort_inversion(vector<int> &nums){
    int i,key,j,inversion_count=0;
    for(int i=0;i<nums.size();i++){
        key=nums[i];
        j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            inversion_count+=1;
            j-=1;
        }
        nums[j+1]=key;
    }
    return inversion_count;
}

int main(){
    vector<int> arr;
    int x,y;
    cout<<"Number of inputs : ";
    cin>>x;
    for(int a=0;a<x;a++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    y = insertion_sort_inversion(arr);
    cout<<y;
    return 0;
}

/*
The highest number of inversions will happen when the list is in descending order.
The total number of inversions then will be n*(n-1)/2.
*/