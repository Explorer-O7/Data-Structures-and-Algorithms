/*
The below code example removes duplicate elements in-place from the given array. The removeDuplicates function takes two arguments, one is an integer array, and another is an integer, it removes the duplicate elements from the given array by arranging the distinct elements at the starting indices of the given array.
Example:
 Input: arr[] = {1, 1, 2, 3, 3}, n = 5
 Output: 1 2 3
 Explanation: 1, 2, and 3 are the only distinct elements in the given array.
 Input: arr[] = {1, 2}, n = 2
 Output: 1 2
 Explanation: 1 and 2 are the only distinct elements in the given array.
*/

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int nums[], int n) {
 int curr = 0;
 for(int i=1; i<n; i++) {
  if(nums[i] != nums[curr])
   nums[++curr] = nums[i];
 }
 return curr+1;
}

int main() {
 int n = 10;
 int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
 int k = removeDuplicates(arr, n);
 for(int i=0; i<k; i++)
  cout << arr[i] << " ";
 return 0;
}
