/*
The below code example checks whether the given number is prime or not. The checkPrime function takes an integer as an argument and check it's divisibility by the numbers in range (2, squareroot of number), and it returns the final result.
Example:
 Input: n = 101
 Output: Prime
 Explanation: 101 has only two factors, 1 & 101.
 Input: n = 9
 Output: Not Prime
 Explanation: 9's factors are 1, 3, & 9.
*/

#include<bits/stdc++.h>
using namespace std;

int checkPrime(int n) {
 int flag = 1;
 for(int i=2; i<=sqrt(n); i++) {
  if(n%i == 0) {
   flag = 0;
   break;
  }
 }
 return flag;
}

int main() {
 int n = 101;
 if(checkPrime(n))
  cout << "Prime";
 else
  cout << "Not Prime";
 return 0;
}
