/* 
Pattern-20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 for(int x=1; x<=n; x++) {
  for(int i=1; i<=x; i++) {
   cout << "*";
  }
  for(int j=2*x; j<2*n; j++) {
   cout << " ";
  }
  for(int k=1; k<=x; k++) {
   cout << "*";
  }
  cout << endl;
 }
 for(int x=1; x<=n-1; x++) {
  for(int i=1; i<=n-x; i++) {
   cout << "*";
  }
  for(int j=1; j<=2*x; j++) {
   cout << " ";
  }
  for(int k=1; k<=n-x; k++) {
   cout << "*";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
