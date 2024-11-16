/*
The below code example implements the bubble sort. The bubbleSort function takes two arguments, one is an integer array and second one is an integer, and sorts the given array in ascending order.
Example:
 Input: arr[] = {9,6,3,-3,-6,-9}, n = 6
 Output: -9 -6 -3 3 6 9
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
 int didSwap = 0;
 for(int i=0; i<n-1; i++) {
  for(int j=0; j<n-i-1; j++) {
   if(arr[j] > arr[j+1]) {
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
    didSwap = 1;
   }
  }
  if(didSwap == 0) break;
 }
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 bubbleSort(arr, n);
 for(int ele : arr)
  cout << ele << " ";
 return 0;
}
