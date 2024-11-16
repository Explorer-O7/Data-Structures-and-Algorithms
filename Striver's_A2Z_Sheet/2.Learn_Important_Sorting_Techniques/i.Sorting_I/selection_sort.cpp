/*
The below code example implements the selection sort. The selectionSort function takes two arguments, one is an integer array and second one is an integer, and sorts the given array in ascending order.
Example:
 Input: arr[] = {8,-4,0,4,-8}, n = 6
 Output: -8 -4 0 4 8
*/

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
 for(int i=0; i<n-1; i++) {
  int min = i;
  for(int j=i; j<n; j++) {
   if(arr[j] < arr[min])
    min = j;
  }
  int temp = arr[min];
  arr[min] = arr[i];
  arr[i] = temp;
 }
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 selectionSort(arr, n);
 for(int ele : arr)
  cout << ele << " ";
 return 0;
}
