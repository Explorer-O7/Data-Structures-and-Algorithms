/*
The below code example finds and returns the largest sum of a contiguous subarray (containing at least one element). The maxSubArray function takes two arguments, one is an integer array, and another is an integer, it finds the contiguous subarray which has the largest sum and returns its sum.
Example:
 Input: arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}, n = 9
 Output: 6
 Explanation: [4,-1,2,1] has the largest sum = 6.
 Input: arr[] = {-1}, n = 1
 Output: -1
 Explanation: A single element is the largest sum in itself.
*/

#include<bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int n) {
 int sum=0, maxSum=INT_MIN;
 for(int i=0; i<n; i++) {
  if(sum < 0) sum = 0;
  sum += arr[i];
  maxSum = max(maxSum, sum);
 }
 return maxSum;
}

int main() {
 int n = 4;
 int arr[] = {4, -1, 2, 1};
 cout << maxSubArray(arr, n);
 return 0;
}
