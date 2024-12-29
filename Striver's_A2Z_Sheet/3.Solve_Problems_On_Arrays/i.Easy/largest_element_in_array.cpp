/*
The below code example finds the largest element in the given array. The findLargest function takes two arguments, one is an integer array, and another is an integer, it finds and returns the largest element present in the given array.
Example:
  Input: arr[] = {15, 69, 0, -4, 9, -13}, n = 6
  Output: 69
  Explanation: 69 is the largest element amongst all the array elements.
*/

#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[], int n) {
 int max = arr[0];
 for(int i=1; i<n; i++) {
  if(arr[i] > max) max = arr[i];
 }
 return max;
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 cout << findLargest(arr, n);
 return 0;
}
