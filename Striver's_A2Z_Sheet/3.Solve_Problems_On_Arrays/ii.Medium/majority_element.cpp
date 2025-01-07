/*
The below code example finds and returns an element that occurs more than n/2 times in the given array. The majorityElement function takes two arguments, an integer array, and an integer, it returns the elements that occurs more than n/2 times in the given array.
Example:
 Input: nums[] = {3, 2, 3}, n = 3
 Output: 3
 Explanation: In the given array, 3 occuring 2 times (more than n/2 times).
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int nums[], int n) {
 int count=0, num;
 for(int i=0; i<n; i++) {
  if(count == 0) {
   num = nums[i];
   count++;
  } else if(num == nums[i]) {
   count++;
  } else {
   count--;
  }
 }
 return num;
}

int main() {
 int n = 7;
 int arr[] = {2, 2, 1, 1, 1, 2, 2};
 cout << majorityElement(arr, n);
 return 0;
}
