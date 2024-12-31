/*
The below code example finds and returns the index if the given key is present in the given array, otherwise, it returns -1. The linearSearch function takes three arguments, an integer array, and two integers, it finds that the given key is present in the given array or not, if present then returns the index of that element otherwise, it returns -1.
Example:
 Input: arr[] = {1, 2, 3, 4, 5}, n = 5, key = 4
 Output: 3
 Explanation: Since, 4 is present in the array at index 3 (0-based indexing).
 Input: arr[] = {-2, 1, 0, -1, 2}, n = 5, key = 3
 Output: -1
 Explanation: Since, 3 is not present in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int k) {
 for(int i=0; i<n; i++) {
  if(arr[i] == k)
   return i;
 }
 return -1;
}

int main() {
 int n=5, key=1;
 int arr[] = {11, 12, 13, 14, 15};
 cout << linearSearch(arr, n, key);
 return 0;
}
