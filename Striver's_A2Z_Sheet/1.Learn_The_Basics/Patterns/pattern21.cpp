/* 
Pattern-21
****
*  *
*  *
****
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=4;
 for(int x=1; x<=n; x++) {
  for(int i=1; i<=n; i++) {
   if(x==1 || x==n)
    cout << "*";
   else if(i==1 || i==n)
    cout << "*";
   else
    cout << " ";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
