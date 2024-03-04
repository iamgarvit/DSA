#include <bits/stdc++.h>
using namespace std;

/* q1
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
*/

/* q2
The highest number of inversions will happen when the list is in descending order.
The total number of inversions then will be n*(n-1)/2.
*/

/* q3
int merge(vector<int>& arr,int low,int mid,int high,int count){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
            count+=1;
        }
        else{
            temp.push_back(arr[right]);
            right++;
            count+=1;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
        count+=1;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
        count+=1;
    }
    for(int i=low;i<=high;i++)
        arr[i]=temp[i-low];
    return count;
}

int sort(vector<int>& arr,int low,int high,int inversion_count=0){
    if(low>=high) return inversion_count;
    int mid=(low+high)/2;
    sort(arr,low,mid,inversion_count);
    sort(arr,mid+1,high,inversion_count);
    inversion_count+=merge(arr,low,mid,high,inversion_count);
    return inversion_count;
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
    cout<<z;
    return 0;
}
*/


/* q4
The number of inversions will have no effect on the time complexity of merge sort algorithm.
The best as well as worst time complexity will be the same.
It is equal to n*log(n).
*/