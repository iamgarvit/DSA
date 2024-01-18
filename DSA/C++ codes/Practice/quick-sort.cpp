#include <bits/stdc++.h>
using namespace std;

int find_pivot(vector<int>& arr, int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int>& arr, int low, int high){
    if(low<high){
        int pivot=find_pivot(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}

vector<int> quickSort(vector<int> arr) {
    quick_sort(arr, 0, arr.size() - 1);
    return arr;
}

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int> l;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    vector<int> newarr;
    l = quickSort(l);
    for(int j=0;j<n;j++){
        cout<<l[j]<<" ";
    }
}