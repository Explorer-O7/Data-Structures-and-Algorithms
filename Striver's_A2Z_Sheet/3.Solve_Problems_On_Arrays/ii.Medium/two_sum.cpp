/*
The below code example returns the indices of two elements from the given array such that their sum is equal to the given target otherwise it returns {-1, -1}. The twoSum function takes three arguments, an integer array, and two integers, it returns the indices of two elements whose sum is equals to target otherwise it returns {-1, -1}.
Example:
 Input: arr[] = {2, 6, 5, 8, 11}, n = 5, target = 14
 Output: 1 3
 Explanation: arr[1] + arr[3] = 14, so the answer is {1, 3}.  
 Input: arr[] = {2, 6, 5, 8, 11}, n = 5, target = 15
 Output: -1 -1
 Explanation: There exist no such two numbers whose sum is equal to the target.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[], int n, int target) {
 if(n <= 1) return {-1, -1};
 unordered_map<int, int> map;
 for(int i=0; i<n; i++) {
  int moreNeeded = target-arr[i];
  if(map.find(moreNeeded) != map.end()) {
   return {map[moreNeeded], i};
  }
  map[arr[i]] = i;
 }
 return {-1, -1};
}

int main() {
 int n=5, target=14;
 int arr[] = {2, 6, 5, 8, 11};
 vector<int> ans = twoSum(arr, n, target);
 cout << ans[0] << " " << ans[1];
 return 0;
}
