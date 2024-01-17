#include <bits/stdc++.h>
using namespace std;

int min_index(vector<int>& nums1){
    int x=0;
    int z=nums1[0];
    for(int i=0;i<nums1.size();i++){
        if(nums1[i]<z)
            x=i;
            z=nums1[i];
    }
    return x;
}

bool check(vector<int>& nums) {
    int y=min_index(nums);
    for(int j=y;j<(nums.size()+y);j++){
        if(nums[j%5]>nums[(j+1)%5])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
        int m;
        cin>>m;
        arr.push_back(m);
    cout<<check(arr);
    return 0;
}