/*
The below code example rotates the given array in left direction by one. The rotateLeftByOne function takes two arguments, one is an integer array, and another is an integer, it rotates the given array in left direction by one.
Example:
 Input: arr[] = {1, 2, 3, 4, 5}, n = 5
 Output: 2 3 4 5 1
 Explanation: Rotating the array left by one will result in the shift of element at first index to last index.
*/

#include<bits/stdc++.h>
using namespace std;

void rotateLeftByOne(int arr[], int n) {
 int temp = arr[0];
 for(int i=0; i<n-1; i++) {
  arr[i] = arr[i+1];
 }
 arr[n-1] = temp;
}

int main() {
 int n = 7;
 int arr[] = {1, 2, 3, 4, 5, 6, 7};
 rotateLeftByOne(arr, n);
 for(int x : arr)
  cout << x << " ";
 return 0;
}
