/*
The below code example checks whether the given number is armstrong or not. The checkArmstrong function takes an integer and calculates it's equivalent armstrong value, and it returns the result of '==' comparision of the number and it's armstrong equivalent.
Example:
 Input: n = 153
 Output: Armstrong
 Explanation: 1^3 + 5^3 + 3^3 = 153, hence 153 is an armstrong.
 Input: n = 123
 Output: Not Armstrong
 Explanation: 1^3 + 2^3 + 3^3 = 36(!=n), hence 123 is not an armstrong.
*/

#include<bits/stdc++.h>
using namespace std;

int pow(int b, int e) {
 int result = 1;
 for(int i=0; i<e; i++)
  result *= b;
 return result;
}

int checkArmstrong(int n) {
 int sum = 0;
 int dc = log10(n)+1;
 for(int i=n; i>0; i/=10) {
  sum += pow(i%10, dc);
 }
 return sum==n;
}

int main() {
 int n = 371;
 if(checkArmstrong(n))
  cout << "Armstrong";
 else
  cout << "Not Armstrong";
 return 0;
}
