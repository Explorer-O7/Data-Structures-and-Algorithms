/*
The below code example finds and returns the length of the longest subarray with the given sum k. The lenOfLongestSubarray function takes three arguments, one is an integer array, and two integers, it finds and returns the length of longest subarray with given sum k from the given array.
Example:
 Input: arr[] = {10, 5, 2, 7, 1, 9}, n = 6, k = 15
 Output: 4
 Explanation: The subarray [5, 2, 7, 1] has a sum of 15 and length 4.
*/

#include<bits/stdc++.h>
using namespace std;

int lenOfLongestSubarray(int arr[], int n, int k) {
 int left=0, right=0, sum=arr[0], maxLength=0;
 while(right < n) {
  while(left<=right && sum>k) {
   sum -= arr[left++];
  }
  if(sum == k){
   maxLength = max(maxLength, (right-left+1));
  }
  right++;
  if(right < n)
   sum += arr[right];
 }
 return maxLength;
}

int main() {
 int n=5, k=10;
 int nums[] = {2, 3, 5, 1, 9};
 cout << lenOfLongestSubarray(nums, n, k);
 return 0;
}
