/*
The below code example is about counting the number of digits in a number. The countDigit function takes an integer as an argument, and returns the sum of 1 and log10 of given number, which eventually is the number of digits in the given number.
Example:
 Input: n = 123
 Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
 return log10(n)+1;
}

int main() {
 int n = 12345678;
 cout << countDigits(n);
 return 0;
}
