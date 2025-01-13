/*
The below code example returns an array such that it contains the alternate positive & negative values without altering their relative order of positive and negative elements as in the given array. The rearrangeArray function takes two arguments, one is an integer array, and another is an integer, it returns an array of alternate positive & negative values.
Example:
 Input: nums[] = {1, 2, -4, -5}, n = 4
 Output: 1 -4 2 -5
 Explanation: Positive elements: 1 2, Negative elements: -4 -5.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(int nums[], int n) {
 int posIndex=0, negIndex=1;
 vector<int> ans(n, 0);
 for(int i=0; i<n; i++) {
  if(nums[i] < 0) {
   ans[negIndex] = nums[i];
   negIndex += 2;
  } else {
   ans[posIndex] = nums[i];
   posIndex += 2;
  }
 }
 return ans;
}

int main() {
 int n = 6;
 int nums[] = {1, 2, 3, -1, -2, -3};
 vector<int> ans = rearrangeArray(nums, n);
 for(auto x : ans)
  cout << x << " ";
 return 0;
}
