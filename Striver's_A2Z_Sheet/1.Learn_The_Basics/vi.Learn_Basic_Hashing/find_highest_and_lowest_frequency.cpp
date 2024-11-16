/*
The below code example prints the element(s) having highest & lowest frequency in the given array. The frequency function takes two arguments, one is an integer array and second one is an integer.
Example:
 Input: arr[] = {2,1,2,3,2,1}, n = 6
 Output: 2 3
 Explanation: The frequency of 2 is three (highest), and the frequency of 3 is one (lowest).
*/

#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
 int minEle, maxEle, lowFreq=n, highFreq=0;
 unordered_map<int, int> map;
 for(int i=0; i<n; i++) {
  map[arr[i]]++;
 }
 for(auto itr : map) {
  if(itr.second < lowFreq) {
   minEle = itr.first;
   lowFreq = itr.second;
  }
  if(itr.second > highFreq) {
   maxEle = itr.first;
   highFreq = itr.second;
  }
 }
 cout << maxEle << " " << minEle;
}

int main() {
 int n = 6;
 int arr[] = {10,5,10,15,10,5};
 frequency(arr, n);
 return 0;
}
