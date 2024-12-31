/*
The below code example moves all the 0's to the end of the given array. The moveZeroesToEnd function takes two arguments, one is an integer array, and another is an integer, it moves all the 0's present in the given array to the end of the array.
Example:
 Input: arr[] = {1, 0, 2, 0, 3}, n = 5
 Output: 1 2 3 0 0
 Explanation: All the 0's moved to the end and all non-zero elements are moved to the front by maintaining order.
*/

#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[], int n) {
 int idx = 0;
 for(int i=0; i<n; i++) {
  if(arr[i] != 0)
   arr[idx++] = arr[i];
 }
 while(idx < n)
  arr[idx++] = 0;
}

int main() {
 int n=9;
 int arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5};
 moveZeroesToEnd(arr, n);
 for(int x : arr)
  cout << x << " ";
 return 0;
}
