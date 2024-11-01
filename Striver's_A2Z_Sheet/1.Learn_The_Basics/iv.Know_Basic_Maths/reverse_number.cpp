/*
The below code example calculates the reverse of a given number. The reverseNumber function takes an integer as an argument and returns it's reversed digit number.
*/

#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n) {
 int rev = 0;
 while(n>0) {
  rev = (rev*10) + (n%10);
  n /= 10;
 }
 return rev;
}

int main() {
 int n = 12345678;
 cout << reverseNumber(n);
 return 0;
}
