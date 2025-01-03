/*
The below code example finds and returns the length of the longest subarray with the given sum k. The lenOfLongestSubarray function takes two arguments, one is an integer array, and another is an integer, it finds and returns the length of longest subarray with given sum k from the given array.
Note: The given array may contain negative elements.
Example:
 Input: arr[] = {10, 5, 2, 7, 1, 9}, k = 15
 Output: 4
 Explanation: The subarray [5, 2, 7, 1] has a sum of 15 and length 4.
 Input: arr[] = [1, -1, 5, -2, 3], k = 3
 Output: 4
 Explanation: The subarray [1, -1, 5, -2] has a sum of 3 and a length 4.
*/

#include<bits/stdc++.h>
using namespace std;

int lenOfLongestSubarray(vector<int>& nums, int k) {
 int sum=0, maxLength=0;
 map<int, int> preSumMap;
 for(int i=0; i<nums.size(); i++) {
  sum += nums[i];
  if(sum == k) {
   maxLength = max(maxLength, i+1);
  }
  if(preSumMap.find(sum-k) != preSumMap.end()) {
   int len = i-preSumMap[sum-k];
   maxLength = max(maxLength, len);
  }
  if(preSumMap.find(sum) == preSumMap.end()) {
   preSumMap[sum] = i;
  }
 }
 return maxLength;
}

int main() {
 int k=3;
 int arr[] = {1, -1, 5, -2, 3};
 vector<int> nums;
 for(int i=0; i<n; i++)
  nums.push_back(arr[i]);
 cout << lenOfLongestSubarray(nums, k);
 return 0;
}
