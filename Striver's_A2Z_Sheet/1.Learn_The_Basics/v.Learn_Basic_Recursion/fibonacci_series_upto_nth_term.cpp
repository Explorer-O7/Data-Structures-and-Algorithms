/*
The below code example prints the fibonacci series upto nth term using recursion. The fibonacciSeries function takes three integers as arguments and prints the fibonacci series upto the given limit.
Example:
 Input: n = 10
 Output: 0 1 1 2 3 5 8 13 21 34
 Explanation: Every element is a sum of it's previous two elements.
*/

#include<bits/stdc++.h>
using namespace std;

void fibonacciSeries(int n, int a, int b) {
 if(n==0) return;
 int c = a+b;
 cout << c << " ";
 a = b; b = c;
 return fibonacciSeries(n-1, a, b);
}

int main() {
 int n = 10;
 fibonacciSeries(n, -1, 1);
 return 0;
}
