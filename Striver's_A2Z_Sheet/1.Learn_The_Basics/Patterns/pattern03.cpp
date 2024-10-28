/* 
Pattern-3
1
12
123
1234
12345
*/

#include<bits/stdc++.h>
using namespace std;
void printPattern() {
 int n=5;
 for(int i=1; i<=n; i++) {
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
