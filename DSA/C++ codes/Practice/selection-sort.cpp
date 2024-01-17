#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& nums){
    for(int i=0;i<nums.size()-1;i++){
        int min_key=i;
        for(int j=i;j<nums.size();j++){
            if(nums[j]<nums[min_key])
                min_key=j;
        }
        if(min_key!=i)
            swap(nums[i],nums[min_key]);
    }
}

int main(){
    int n;
    cout<<"Number of elements : ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    selection_sort(arr);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}