/*
The below code example returns the count of the maximum consecutive one's in the given array. The findMaxConsecutiveOnes function takes two arguments, one is an integer array, and another is an integer, it returns the count of the maximum consecutive one's present in the given array.
Example:
 Input: nums[] = {1, 1, 0, 1, 1, 1}, n = 6
 Output: 3
 Explanation: There the maximum consecutive one's are 3 in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int nums[], int n) {
 int count=0, maxCount=0;
 for(int i=0; i<n; i++) {
  if(nums[i] == 1)
   count++;
  else
   count = 0;
  maxCount = max(maxCount, count);
 }
 return maxCount;
}

int main() {
 int n = 5;
 int nums[] = {1, 0, 1, 1, 1};
 cout << findMaxConsecutiveOnes(nums, n);
 return 0;
}
