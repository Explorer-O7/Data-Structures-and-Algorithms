/* 
Pattern-14
A
AB
ABC
ABCD
ABCDE
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 char symbol;
 for(int x=1; x<=n; x++) {
  symbol = 'A';
  for(int i=1; i<=x; i++) {
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
