/*
The below code example prints the subarray having the maximum subarray sum in the given array. The subArrayWithMaxSum function takes two arguments, one is an integer array, and another is an integer, it returns the indices(range) of the subarray having maximum subarray sum in the given array.
Example:
 Input: arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4, -1}, n = 10
 Output: 4 -1 2 1
 Explanation: The subarray [4, -1, 2, 1] has the largest sum = 6.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> subArrayWithMaxSum(int arr[], int n) {
 int sum=0, maxSum=INT_MIN;
 int start=0, end=0, idx=0;
 for(int i=0; i<n; i++) {
  sum += arr[i];
  if(sum > maxSum) {
   maxSum = sum;
   end = i;
  } else if(sum < 0) {
   sum = 0;
   start = i+1;
  }
 }
 return {start, end};
}

int main() {
 int n = 8;
 int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
 vector<int> ans = subArrayWithMaxSum(arr, n);
 for(int i=ans[0]; i<=ans[1]; i++)
  cout << arr[i] << " ";
 return 0;
}
