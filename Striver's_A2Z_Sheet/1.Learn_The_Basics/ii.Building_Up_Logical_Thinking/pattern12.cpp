/* 
Pattern-12
1      1
12    21
123  321
12344321
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=4;
 for(int x=1; x<=n; x++) {
  for(int i=1; i<=x; i++) {
   cout << i;
  }
  for(int j=x; j<=n-1; j++) {
   cout << "  ";
  }
  for(int k=x; k>=1; k--) {
   cout << k;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
