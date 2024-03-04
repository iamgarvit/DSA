#include<iostream>
using namespace std;

int qs(int arr[], int low, int high) {
    int i = low;
    int pivot = arr[low];
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
            }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int part = qs(arr, low, high);
        quicksort(arr, low, part - 1);
        quicksort(arr, part + 1, high);
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array separated by spaces : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    quicksort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}