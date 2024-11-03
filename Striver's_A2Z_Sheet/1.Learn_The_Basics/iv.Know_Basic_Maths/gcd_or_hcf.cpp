/*
The below code example computes the gcd/hcf (greatest common divisor/highest common factor) of the given two numbers. The gcd function takes two integers as arguments and returns their gcd or hcf.
Example:
 Input: n1 = 15, n2 = 20
 Output: 5
 Explanation: 5 is the highest number that divides 15 and 20 both.
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
 while(a>0 && b>0) {
  if(a>b) a = a%b;
  else b = b%a;
 }
 if(a==0) return b;
 return a;
}

int main() {
 int n1=15, n2=20;
 cout << gcd(n1, n2);
 return 0;
}
