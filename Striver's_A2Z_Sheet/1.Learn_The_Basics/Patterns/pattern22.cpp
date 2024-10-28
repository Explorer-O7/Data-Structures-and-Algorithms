/*
Pattern-22
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<bits/stdc++.h>
using namespace std;

void printPattern() {
 int n=7, ele;
 for(int x=0; x<=n/2; x++) {
  ele = 4;
  for(int i=0; i<x; i++) {
   cout << ele-- << " ";
  }
  for(int j=x; j<n-x; j++) {
   cout << ele << " ";
  }
  for(int k=n-x; k<n; k++) {
   cout << ++ele << " ";
  }
  cout << endl;
 }
 for(int x=(n/2)+1; x<n; x++) {
  ele = 4;
  for(int i=x; i<n; i++) {
   cout << ele-- << " ";
  }
  if(ele!=4) ele++;
  for(int j=n-x; j<x+1; j++) {
   cout << ele << " ";
  }
  for(int k=x+1; k<n; k++) {
   cout << ++ele << " ";
  }
  cout << endl;
 }
}

int main() {
 printPattern();
 return 0;
}
