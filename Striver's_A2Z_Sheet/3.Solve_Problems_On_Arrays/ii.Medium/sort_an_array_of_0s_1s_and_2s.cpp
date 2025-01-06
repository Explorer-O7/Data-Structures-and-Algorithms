/*
The below code example sorts the given array consisting of only 0's, 1's, and 2's in ascending order. The sortArray function takes two arguments, one is an integer array, and another is an integer, it sorts the given array of 0's, 1's, & 2's in ascending order.
Example:
 Input: arr[] = {2, 0, 2, 1, 1, 0}, n = 6
 Output: 0 0 1 1 2 2
 Explanation: The given array is sorted in ascending order.
*/

#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n) {
 int low=0, mid=0, high=n-1;
 while(mid <= high) {
  if(arr[mid] == 0) {
   int temp = arr[low];
   arr[low] = arr[mid];
   arr[mid] = temp;
   low++; mid++;
  } else if(arr[mid] == 1) {
   mid++;
  } else {
   int temp = arr[mid];
   arr[mid] = arr[high];
   arr[high] = temp;
   high--;
  }
 }
}

int main() {
 int n=6;
 int arr[] = {1, 0, 2, 0, 2, 1};
 sortArray(arr, n);
 for(int i=0; i<n; i++)
  cout << arr[i] << " ";
 return 0;
}
