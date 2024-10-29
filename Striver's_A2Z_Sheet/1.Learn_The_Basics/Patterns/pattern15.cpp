/* 
Pattern-15
ABCDE
ABCD
ABC
AB
A
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 char symbol;
 for(int x=1; x<=n; x++) {
  symbol = 'A';
  for(int i=n; i>=x; i--) {
   cout << symbol;
   symbol++;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
