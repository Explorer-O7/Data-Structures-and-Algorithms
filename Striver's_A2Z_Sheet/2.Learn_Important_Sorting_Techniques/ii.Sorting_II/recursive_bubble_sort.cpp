/*
The below code example implements the recursive bubble sort. The bubbleSort function takes two arguments, an integer array, and an integer, it sorts the given array in ascending order using recursion.
Example:
  Input: arr[] = {13,46,24,52,20,9}, n = 6
  Output: 9 13 20 24 46 52
*/

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
 if(n == 1) return;
 for(int i=0; i<n-1; i++) {
  if(arr[i] > arr[i+1]) {
   int temp = arr[i];
   arr[i] = arr[i+1];
   arr[i+1] = temp;
  }
 }
 bubbleSort(arr, n-1);
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 bubbleSort(arr, n);
 for(int itr : arr)
  cout << itr <<" ";
 return 0;
}
