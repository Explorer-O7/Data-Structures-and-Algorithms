/* 
Pattern-10
*
**
***
****
*****
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=9;
 for(int i=1; i<=(n/2)+1; i++) {
  for(int j=1; j<=i; j++) {
   cout << "*";
  }
  cout << endl;
 } 
 for(int i=(n/2)+2; i<=n; i++) {
  for(int j=n-i+1; j>=1; j--) {
   cout << "*";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
