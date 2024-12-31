/*
The below code example rotates the given array either in left or right direction by k elements. The rotateLeftByK & rotateRightByK both functions takes three arguments, an integer array, and two integers, they rotates the given array by k elements in the respective direction.
Example: 
 Input: arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7, k = 3
 Output: 40 50 60 70 10 20 30
 Explanation: The array is rotated left by 3 elements.
 Input: arr[] = {10, 20, 30, 40, 50, 60, 70}, n = 7, k = 3
 Output: 50 60 70 10 20 30 40
 Explanation: The array is rotated right by 3 elements.
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int low, int high) {
 while(low < high) {
  arr[low] = arr[low] + arr[high];
  arr[high] = arr[low] - arr[high];
  arr[low] = arr[low] - arr[high];
  low++; high--;
 }
}

void rotateLeftByK(int arr[], int n, int k) {
 k = k%n;
 if(n==1 || k>n || k==0) return;
 reverseArray(arr, 0, k-1);
 reverseArray(arr, k, n-1);
 reverseArray(arr, 0, n-1);
}

void rotateRightByK(int arr[], int n, int k) {
 k = k%n;
 if(n==1 || k>n || k==0) return;
 reverseArray(arr, 0, n-k-1);
 reverseArray(arr, n-k, n-1);
 reverseArray(arr, 0, n-1);
}

int main() {
 int n=7, k=3;
 int arr1[] = {1, 2, 3, 4, 5, 6, 7};
 rotateLeftByK(arr1, n, k);
 for(int x : arr1)
  cout << x << " ";
 cout << endl;
 int arr2[] = {1, 2, 3, 4, 5, 6, 7};
 rotateRightByK(arr2, n, k);
 for(int x : arr2)
  cout << x << " ";
 return 0;
}
