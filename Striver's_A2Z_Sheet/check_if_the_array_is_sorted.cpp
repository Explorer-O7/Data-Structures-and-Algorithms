/*
The below code example checks that the given array is sorted or not. The checkSorted function takes two arguments, one is an integer array, and another is an integer, it checks that the given array is sorted (ascending order) or not. It can also check for the rotated sorted array.
Example:
 Input: arr[] = {1, 2, 3}, n = 3
 Output: true
 Explanation: Every element in the given array is lesser than it's next element.
 Input: arr[] = {2, 1, 3, 4}, n = 4
 Output: false
 Explanation: The given array is not a rotated sorted array.
 Input: arr[] = {3, 4, 5, 1, 2}, n = 5
 Output: true
 Explanation: The given array is sorted array, which is rotated 3 times.
*/

#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int nums[], int n) {
 int count = 0;
 for(int i=0; i<n-1; i++) {
  if(nums[i] > nums[i+1]) count++;
 }
 if(nums[n-1] > nums[0]) count++;
 return count<=1;
}

int main() {
 int n = 3;
 int arr[] = {1,2,3};
 if(checkSorted(arr, n)) cout << "true";
 else cout << "false";
 return 0;
}
