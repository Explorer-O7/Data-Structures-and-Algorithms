/*
The below code example finds and returns the list of all the leaders in the given array (An element is considered a leader if it is greater than or equal to all elements to its right, the rightmost element is always a leader). The leadersInArray function takes two arguments, one is an integer array, and another is an integer, it returns the list of all the leaders present in the given array.
Example:
 Input: nums[] = {4, 7, 2, 3, 5}, n = 5
 Output: {7, 5}
 Explanation: There is nothing greater on the right side of 7 and 5.
 Input: nums[] = {10, 12, 14, 16, 18}, n = 5
 Output: {18}
 Explanation: When an array is sorted in increasing order, only the rightmost element is leader.
 Input: nums[] = {30, 25, 20, 15, 10}, n = 5
 Output: {30, 25, 20, 15, 10}
 Explanation: When an array is sorted in non-increasing order, all elements are leaders.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> leadersInArray(int nums[], int n) {
 int maxElem = INT_MIN;
 vector<int> ans;
 for(int i=n-1; i>=0; i--) {
  if(nums[i] >= maxElem) {
   maxElem = nums[i];
   ans.push_back(nums[i]);
  }
 }
 reverse(ans.begin(), ans.end());
 return ans;
}

int main() {
 int n = 5;
 int nums[] = {6, 7, 4, 3, 5, 2};
 vector<int> result = leadersInArray(nums, n);
 for(int x : result)
  cout << x << " ";
 return 0;
}
