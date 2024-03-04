#include <iostream>

using namespace std;

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  cout<<"The pivot is : "<<pivot<<" . ";
  cout<<"The partitioned array is : ";
  for(int a=low;a<=high;a++){
    cout<<arr[a]<<" ";
  }
  cout<<"\n";
  int i = (low - 1);
  int j=low;
  while (j <= high - 1) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
    j++;
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    int piv;
    if (low < high) {
        piv = partition(arr, low, high);
    quickSort(arr, low, piv - 1);
    quickSort(arr, piv + 1, high);
  }
}

int main() {
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;
    cout<<"Enter the elements separated by space : ";
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
