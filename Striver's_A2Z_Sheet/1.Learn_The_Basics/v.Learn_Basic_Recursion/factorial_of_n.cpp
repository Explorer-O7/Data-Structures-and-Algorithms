/*
The below code example calculates the factorial of a given number using recursion. The fact function takes an integer as an argument and returns it's factorial.
Example:
 Input: n = 5
 Output: 120
 Explanation: 5*4*3*2*1 = 120
*/

#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
 if(n==1) return 1;
 return n*fact(n-1);
}

int main() {
 int n = 5;
 cout << fact(n);
 return 0;
}
