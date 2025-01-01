/*
The below code example finds and returns the number which appears once, where other numbers twice in the given array using XOR operation. The singleNumber function takes two arguments, one is an integer array, and another is an integer, it finds and returns the number having only one occurence, where other numbers occurs twice in the given array.
Example:
 Input: nums[] = {1, 1, 2, 3, 3}, n = 5
 Output: 2
 Explanation: Only 2 appears once in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int singleNumber(int nums[], int n) {
 int XOR = 0;
 for(int i=0; i<n; i++)
  XOR ^= nums[i];
 return XOR;
}

int main() {
 int n = 5;
 int nums[] = {4, 1, 2, 1, 2};
 cout << singleNumber(nums, n);
 return 0;
}
