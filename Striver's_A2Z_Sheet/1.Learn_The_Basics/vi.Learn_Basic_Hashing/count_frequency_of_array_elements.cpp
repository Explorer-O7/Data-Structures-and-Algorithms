/*

*/

#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
 unordered_map<int, int> map;
 for(int i=0; i<n; i++)
  map[arr[i]]++;
 for(auto itr:map)
  cout << itr.first << " " << itr.second << endl;
}

int main() {
 int n = 8;
 int arr[] = {10,15,20,10,20,15,10,5};
 frequency(arr, n);
 return 0;
}
