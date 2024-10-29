/* 
Pattern-17
   A
  ABA
 ABCBA
ABCDCBA
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=4, breakpoint;
 char symbol='A';
 for(int x=0; x<n; x++) {
  symbol = 'A';
  for(int i=1; i<=n-x; i++) {
   cout << " ";
  }
  breakpoint = (2*x+1)/2;
  for(int j=1; j<=2*x+1; j++) {
   cout << symbol;
   if(j<=breakpoint) symbol++;
   else symbol--;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
