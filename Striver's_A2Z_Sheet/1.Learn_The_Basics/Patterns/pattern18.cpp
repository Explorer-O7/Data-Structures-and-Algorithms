/* 
Pattern-18
E
D E
C D E
B C D E
A B C D E
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=5;
 for(int x=0; x<n; x++) {
  for(char i='E'-x; i<='E'; i++) {
   cout << i << " ";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
