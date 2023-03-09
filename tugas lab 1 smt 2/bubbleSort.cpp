#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  int k, j, tmp;
  for (k=1; k<=n; k++){
    for (j=1; j<n; j++){
      if(arr[j]<arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}
  int main() {
    int array[100], n, k, b;
    cout << "Masukan banyak elemen: ";
    cin >> n;
    cout << "Masukan nilai : \n";
    for (k=1; k<=n; k++){
      cin >> array[k];
    }
    bubbleSort(array, n);
    cout << "Hasil pengurutan dengan algoritma bubble sort : \n";
    for (k=1; k<=n; k++){
      cout << array[k] << " ";
    }
    cout << "\n";
 }