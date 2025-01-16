/*
The below code example rearranges the given array elements as its next permutation accroding to the lexicographical order arrangement of the array elements. The nextPermutation function takes two arguments, one is an integer array, and another is an integer, it rearranges the array elements such that it represents the next permutation according to the lexicographical order of the given array elements.
Example:
 Input: nums[] = {1, 3, 2}, n = 3
 Output: 2 1 3
 Explanation: All permutations of {1,2,3} are {{1,2,3}, {1,3,2}, {2,1,3}, {2,3,1}, {3,1,2}, {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.
 Input: nums[] = {3, 2, 1}, n = 3
 Output: 1 2 3
 Explanation: All permutations of {1,2,3} are {{1,2,3}, {1,3,2}, {2,1,3}, {2,3,1}, {3,1,2}, {3,2,1}}. So, the next permutation just after {3,2,1} is {1,2,3}.
*/

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int nums[], int n) {
 int breakPoint=-1;
 for(int i=n-2; i>=0; i--) {
  if(nums[i] < nums[i+1]) {
   breakPoint = i;
   break;
  }
 }
 if(breakPoint != -1) {
  for(int i=n-1; i>=0; i--) {
   if(nums[i] > nums[breakPoint]) {
    int temp = nums[breakPoint];
    nums[breakPoint] = nums[i];
    nums[i] = temp;
    break;
   }
  }
 }
 int i=breakPoint+1, j=n-1;
 while(i<j) {
  int temp = nums[i];
  nums[i] = nums[j];
  nums[j] = temp;
  i++; j--;
 }
}

int main() {
 int n = 6;
 int nums[] = {1, 2, 5, 4, 3, 0};
 cout << "Current Permutation:\n";
 for(int i=0; i<n; i++)
  cout << nums[i] << " ";
 cout << endl;
 nextPermutation(nums, n);
 cout << "Next Permutation:\n";
 for(int i=0; i<n; i++)
  cout << nums[i] << " ";
 return 0;
}
