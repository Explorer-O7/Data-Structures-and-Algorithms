/* 
Pattern-11
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5, symbol;
 for(int i=0; i<n; i++) {
  if(i%2==0) symbol = 1;
  else symbol = 0;
  for(int j=0; j<=i; j++) {
   cout << symbol << " ";
   symbol = 1-symbol;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
