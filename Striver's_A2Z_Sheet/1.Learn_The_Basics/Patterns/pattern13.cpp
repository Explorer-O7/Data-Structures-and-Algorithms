/* 
Pattern-13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5, symbol=1;
 for(int x=1; x<=n; x++) {
  for(int i=1; i<=x; i++) {
   cout << symbol << " ";
   symbol++;
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
