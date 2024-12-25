/*
The below code example implements the recursive insertion sort. The insertionSort function takes three arguments, an integer array, and two integers, it sorts the given array in ascending order using recursion.
Example:
  Input: arr[] = {13,46,24,52,20,9}, n = 6
  Output: 9 13 20 24 46 52
*/

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int i, int n) {
 if(i == n) return;
 int j = i;
 while(j>0 && arr[j-1]>arr[j]) {
  int temp = arr[j];
  arr[j] = arr[j-1];
  arr[j-1] = temp;
  j--;
 }
 insertionSort(arr, i+1, n);
}

int main() {
 int n = 6;
 int arr[] = {13,46,24,52,20,9};
 insertionSort(arr, 0, n);
 for(int itr : arr)
  cout << itr <<" ";
 return 0;
}
