/* 
Pattern-5
*****
****
***
**
*
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 for(int i=1; i<=n; i++) {
  for(int j=n; j>=i; j--) {
   cout << "*";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
