/*
The below code example finds and returns the only number that is missing in the range [0, n] from the given array using X-OR approach. The missingNumber function takes two arguments, one is an integer array, and another is an integer, it finds and returns the missing number in the range of [0, n] from the given array of distinct elements.
Example:
 Input: nums[] = {0, 1, 3}, n = 3
 Output: 2
 Explanation: 2 is missing from the given range of [0, 3].
*/

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int nums[], int n) {
 int XOR1=0, XOR2=0;
 for(int i=0; i<n; i++)
  XOR1 ^= nums[i];
 for(int i=1; i<=n; i++)
  XOR2 ^= i;
 return XOR1^XOR2;
}

int main() {
 int n = 5;
 int nums[] = {0, 1, 2, 4, 5};
 cout << missingNumber(nums, n);
 return 0;
}
