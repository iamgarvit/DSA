#include <iostream>

using namespace std;

void partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);  // index of smaller element

  // Display pivot and initial array
  cout << "Pivot: " << pivot << endl;
  cout << "Array: ";
  for (int j = low; j <= high; j++) {
    cout << arr[j] << " ";
  }
  cout << endl;

  for (int j = low; j <= high - 1; j++) {
    // Check if current element is smaller than the pivot
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);

      // Display partitioned array after each swap
      cout << "Partition: ";
      for (int k = low; k <= i; k++) {
        cout << arr[k] << " ";
      }
      cout << "| ";
      for (int k = i + 1; k <= high; k++) {
        cout << arr[k] << " ";
      }
      cout << endl;
    }
  }

  swap(arr[i + 1], arr[high]);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);

    // Display partitioned sub-arrays after partition
    cout << "Sub-array 1: ";
    for (int k = low; k <= pi - 1; k++) {
      cout << arr[k] << " ";
    }
    cout << endl;
    cout << "Sub-array 2: ";
    for (int k = pi + 1; k <= high; k++) {
      cout << arr[k] << " ";
    }
    cout << endl;

    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  quickSort(arr, 0, n - 1);

  cout << "Sorted array: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
