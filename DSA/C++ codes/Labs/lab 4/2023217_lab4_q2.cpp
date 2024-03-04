#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums, int l, int r,int size) {
    if (l > r) {
        return 0;
    }
    int sum1=0;
    int mid = (l + r) / 2;
    int sum2=0;
    int left = maxSubArray(nums, l, mid-1,size);
    int right = maxSubArray(nums, mid + 1, r,size);
    int ci=0;
    int b=0;
    while (ci <= r) {
        sum1 += nums[ci];
        b = max(sum1, b);
        ci+=1;
    }
    int a=0;
    int cj=mid-1;
    while (cj >= l) {
        sum2 += nums[cj];
        a = max(sum2, a);
        cj-=1;
    }
    return max({left, right, a + b + nums[mid]});
}

int main() {
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements : ";
    cin >> n;
    cout<<"Enter the elements separated by space : ";
    int a=0;
    while (a<n) {
        int x;
        cin >> x;
        arr.push_back(x);
        a+=1;
    }
    int ans = maxSubArray(arr, 0, arr.size() - 1,n);
    cout << ans;
}