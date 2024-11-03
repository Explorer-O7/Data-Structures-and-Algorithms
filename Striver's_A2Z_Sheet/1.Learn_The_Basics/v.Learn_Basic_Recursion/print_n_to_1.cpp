/*
The below code example prints the numbers from n to 1 using recursion. The printRange function takes an integer as an argument and print the series from n to 1.
Example:
 Input: n = 5
 Output: 5 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

void printRange(int n) {
 if(n<1) return;
 cout << n << " ";
 printRange(n-1);
}

int main() {
 int n = 5;
 printRange(n);
 return 0;
}
