/* 
Pattern-6
12345
1234
123
12
1
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 for(int i=n; i>=1; i--) {
  for(int j=1; j<=i; j++) {
   cout << j;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}