/*
The below code example prints the frequencies of distinct elements in the given array by using hashing. The frequency function takes two arguments, one is an integer array and second one is an integer.
Example:
 Input: arr[] = {1,2,1,2,1,3}, n = 6
 Output: 1-->3
         2-->2
         3-->1
 Explanation: 1 occurs three times, 2 occurs two times, and 3 occurs one time in the array.
*/

#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
 unordered_map<int, int> map;
 for(int i=0; i<n; i++)
  map[arr[i]]++;
 for(auto itr:map)
  cout << itr.first << "-->" << itr.second << endl;
}

int main() {
 int n = 8;
 int arr[] = {10,15,20,10,20,15,10,5};
 frequency(arr, n);
 return 0;
}
