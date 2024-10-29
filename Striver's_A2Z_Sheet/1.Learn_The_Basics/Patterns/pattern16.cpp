/* 
Pattern-16
A
BB
CCC
DDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 char symbol='A';
 for(int x=1; x<=n; x++) {
  for(int i=1; i<=x; i++) {
   cout << symbol;
  }
  cout << endl;
  symbol++;
 }
}

int main() {
 printPattern();
 return 0;
}
