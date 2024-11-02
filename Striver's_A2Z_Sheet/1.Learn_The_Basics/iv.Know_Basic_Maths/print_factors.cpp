/*
The below code example prints all the factors of the given number. The printFactors function takes an integer as an argument and print it's factors by following an optimal approach.
Example:
 Input: n = 36
 Output: 1 2 3 4 6 9 12 18 36
*/

#include<bits/stdc++.h>
using namespace std;

void printFactors(int n) {
 set<int> ls;
 for(int i=1; i*i<=n; i++) {
  if(n%i == 0) {
   ls.insert(i);
   ls.insert(n/i);
  }
 }
 for(auto it:ls) cout << it << " ";
}

int main() {
 int n = 36;
 printFactors(n);
 return 0;
}
