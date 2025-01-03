/*

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
