#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];
}

void sort(vector<int>& arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    sort(arr,low,mid);
    sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    vector<int> l;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    sort(l,0,n-1);
    for(int j=0;j<n;j++){
        cout<<l[j]<<" ";
    }
}