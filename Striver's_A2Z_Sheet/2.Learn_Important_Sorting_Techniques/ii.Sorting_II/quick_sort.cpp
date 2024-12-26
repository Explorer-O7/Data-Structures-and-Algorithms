/*
The below code example implements the quick sort. The quickSort function takes three arguments, an integer vector, and two integers, it finds the partition point using the findPivot function. The findPivot function takes three arguments, an integer vector, and two integers, it rearranges the given array by swapping the elements and sorts the array in ascending order at last.
Example:
 Input: arr[] = {-4,-12,4,12,-8,8}, n = 6
 Output: -12 -8 -4 4 8 12
*/

#include<bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr, int low, int high) {
 int i=low, j=high;
 while(i < j) {
  while(arr[i]<=arr[low] && i<=high-1) { i++; }
  while(arr[j]>arr[low] && j>=low+1) { j--; }
  if(i<j) {
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
  }
 }
 int temp = arr[j];
 arr[j] = arr[low];
 arr[low] = temp;
 return j;
}

void quickSort(vector<int>& arr, int low, int high) {
 if(low < high) {
  int pivot = findPivot(arr, low, high);
  quickSort(arr, low, pivot-1);
  quickSort(arr, pivot+1, high);
 }
}

int main() {
 int n = 6;
 vector<int> arr;
 for(int i=0; i<n; i++) {
  int elem;
  cout << "Enter a number: ";
  cin >> elem;
  arr.push_back(elem);
 }
 quickSort(arr, 0, n-1);
 for(auto ele : arr)
  cout << ele << " ";
 return 0;
}
