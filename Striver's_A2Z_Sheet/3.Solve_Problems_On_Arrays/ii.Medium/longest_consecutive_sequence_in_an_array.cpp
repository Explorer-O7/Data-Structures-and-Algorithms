/*
The below code example finds and returns the length of longest sequence which contains the consecutive elements in the given array. The longestSuccessiveElements function takes two arguments, one is an integer array, another is an integer, it finds and returns the length of longest sequence of consecutive elements.
Example:
 Input: arr[] = {3, 8, 5, 7, 6}, n = 6
 Output: 4
 Explanation: The longest consecutive subsequence is 5, 6, 7, 8.
*/

#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(int arr[], int n) {
 int count=1, maxCount=1;
 unordered_set<int> set;
 for(int i=0; i<n; i++)
  set.insert(arr[i]);
 for(int i=0; i<n; i++) {
  if(set.find(arr[i]-1) != set.end()) {
   count = 1;
  } else {
   int temp = arr[i];
   while(set.find(temp+1) != set.end()) {
    count++;
    temp++;
   }
  }
  maxCount = max(maxCount, count);
 }
 return maxCount;
}

int main() {
 int n = 6;
 int arr[] = {5, 8, 3, 2, 1, 4};
 cout << longestSuccessiveElements(arr, n);
 return 0;
}
