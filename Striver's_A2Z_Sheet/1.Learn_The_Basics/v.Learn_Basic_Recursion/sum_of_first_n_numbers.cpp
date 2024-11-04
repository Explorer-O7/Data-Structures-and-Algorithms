/*
The below code example calculates the sum of first n numbers using recursion. The sumOfFirstNNums takes an integer as an argument, calculates the sum from 1 till given number, and returns the sum.
Example:
 Input: n = 5
 Output: 15
 Explanation: 1+2+3+4+5 = 15
*/

#include<bits/stdc++.h>
using namespace std;

int sumOfFirstNNums(int n) {
 if(n==0) return 0;
 return n+sumOfFirstNNums(n-1);
}

int main() {
 int n = 5;
 cout << sumOfFirstNNums(n);
 return 0;
}
