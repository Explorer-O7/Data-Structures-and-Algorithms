/*
The below code example finds the second largest element in the given array. The findSecondLargest function takes two arguments, one is an integer array, and another is an integer, it finds and returns the second largest element present in the given array.
Example:
 Input: arr[] = {123, 567, 234, 456, 345}, n = 5
 Output: 456
 Explanation: The largest element of the array is 567, and the second largest element is 456.
 Input: arr[] = {10, 10, 10}, n = 3
 Output: -1
 Explanation: The largest element of the array is 10, and there is no second largest element.
*/

#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[], int n) {
 int largest=INT_MIN, secondLargest=INT_MIN;
 for(int i=0; i<n; i++) {
  if(arr[i] > largest) {
   secondLargest = largest;
   largest = arr[i];
  } else if(arr[i]>secondLargest && arr[i]!=largest) {
   secondLargest = arr[i];
  }
 }
 return (secondLargest==INT_MIN) ? -1 : secondLargest;
}

int main() {
 int n = 3;
 int arr[] = {10, 11, 12};
 cout << findSecondLargest(arr, n);
 return 0;
}
