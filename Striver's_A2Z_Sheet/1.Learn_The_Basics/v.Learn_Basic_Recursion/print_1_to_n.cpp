/*
The below code example prints the numbers from 1 to n using recursion. The printRange function takes an integer as an argument and prints the series of numbers from 1 to n.
Example:
 Input: n = 5
 Output: 1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void printRange(int n) {
 if(n<1) return;
 printName(n-1);
 cout << n << " ";
}

int main() {
 int n = 5;
 printRange(n);
 return 0;
}
