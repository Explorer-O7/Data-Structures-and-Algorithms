/*
The below code example implements the insertion sort. The insertionSort function takes two arguments, one is an integer array and second one is an integer, and sorts the elements of the given array in ascending order.
Example:
 Input: arr[] = {-2,4,-6,2,-4,6}, n = 6
 Output: -6 -4 -2 2 4 6
*/

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
 for(int i=0; i<n; i++) {
  int j = i;
  while(j>0 && arr[j-1]>arr[j]) {
   arr[j-1] = arr[j-1]+arr[j];
   arr[j] = arr[j-1]-arr[j];
   arr[j-1] = arr[j-1]-arr[j];
   j--;
  }
 }
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 insertionSort(arr, n);
 for(int ele : arr)
  cout << ele << " ";
 return 0;
}
