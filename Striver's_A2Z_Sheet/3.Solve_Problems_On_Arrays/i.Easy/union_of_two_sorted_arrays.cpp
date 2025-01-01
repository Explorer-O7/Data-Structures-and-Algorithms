/*
The below code example finds and returns the union (total distinct elements present in the given arrays) of the two given arrays. The findUnion function takes four arguments, two integer arrays, and two integers, it finds and returns the union of the two given arrays as a vector.
Example: 
 Input: arr1[] = {1, 2, 3, 4, 5}, arr2[] = {1, 2, 3, 6, 7}, n = 5, m = 5
 Output: 1 2 3 4 5 6 7
 Explanation: Distinct elements including both the arrays are 1, 2, 3, 4, 5, 6, 7.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
 vector<int> younion;
 int i=0, j=0;
 while(i<n && j<m) {
  if(arr1[i] <= arr2[j]) {
   if(younion.size()==0 || younion.back()!=arr1[i])
    younion.push_back(arr1[i]);
   i++;
  } else {
   if(younion.size()==0 || younion.back()!=arr2[j])
    younion.push_back(arr2[j]);
   j++;
  }
 }
 while(i < n) {
  if(younion.back() != arr1[i])
   younion.push_back(arr1[i]);
  i++;
 }
 while(j < m) {
  if(younion.back() != arr2[j])
   younion.push_back(arr2[j]);
  j++;
 }
 return younion;
}

int main() {
 int n=10, m=7;
 int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
 vector<int> younion = findUnion(arr1, arr2, n, m);
 for(auto & val : younion)
  cout << val << " ";
 return 0;
}
