#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums){
    int i,key,j;
    for(int i=0;i<nums.size();i++){
        key=nums[i];
        j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j-=1;
        }
        nums[j+1]=key;
    }
}

int main(){
    vector<int> arr;
    int x;
    cout<<"Number of inputs : ";
    cin>>x;
    for(int a=0;a<x;a++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    insertion_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}