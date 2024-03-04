#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& arr,int low,int mid,int high,int count){
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]>arr[right]){
            right++;
            count++;
        }
        else{
            left++;
            count++;
        }
    }
    while(left<=mid){
        left++;
    }
    while(right<=high){
        right++;
    }
    return count;
}

int sort(vector<int>& arr,int low,int high,int inversion_count=0){
    if(low>=high) return inversion_count;
    int mid=(low+high)/2;
    sort(arr,low,mid,inversion_count);
    sort(arr,mid+1,high,inversion_count);
    inversion_count+=merge(arr,low,mid,high,inversion_count);
}

int main(){
    int n,z;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int> l;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    z=sort(l,0,n-1);
    for(int j=0;j<n;j++){
        cout<<l[j]<<" ";
    }
    cout<<z;
    return 0;
}

/*
The number of inversions will have no effect on the time complexity of merge sort algorithm.
The best as well as worst time complexity will be the same.
It is equal to n*log(n).
*/