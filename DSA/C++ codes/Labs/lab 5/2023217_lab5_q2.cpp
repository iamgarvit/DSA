#include <bits/stdc++.h>
using namespace std;

int qs(int arr[], int low, int high) {
    int pivot_value;
    int pivot_index = low + rand() % (high - low + 1);  //random index
    pivot_value = arr[pivot_index];
    cout<<"The pivot is : "<<pivot_value<<". "; //print pivot
    swap(arr[pivot_index], arr[high]);
    int i = low - 1;
    int j=low;
    cout<<"The partitioned array is : "; //print partitioned array
    int pri=low;
    while(pri<=high){
        cout<<arr[pri]<<" ";
        pri++;
    }
    cout<<"\n";
    while (j<high) {
        if (arr[j] <= pivot_value) { 
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    int part;
    if (low < high) {
        part = qs(arr, low, high);
        quicksort(arr, low, part - 1);
        quicksort(arr, part + 1, high);
    }
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    cout << "Enter elements with spaces: ";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; //input array
    }
    srand(time(0));//random integer generator

    quicksort(arr, 0, n - 1);

    cout << "The sorted array is : ";
    for (int a = 0; a < n; a++) {
        cout << arr[a] << " ";
    }
    return 0;
}