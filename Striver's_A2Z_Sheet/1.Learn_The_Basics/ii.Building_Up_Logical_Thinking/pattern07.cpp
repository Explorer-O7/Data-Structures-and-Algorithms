/* 
Pattern-7
    *
   ***
  *****
 *******
*********
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 for(int i=1; i<=n; i++) {
  for(int j=n; j>i; j--) {
   cout << " ";
  }
  for(int k=1; k<=(2*i)-1; k++) {
   cout << "*";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
