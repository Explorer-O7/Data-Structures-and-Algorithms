/*
The below code example checks whether the given number is a palindrome or not. The checkPalindrome function takes an integer as an argument, calculates the reverse of it, and returns the result of '==' comparision of reverse and the number itself.
Example:
 Input: n = 1331
 Output: Palindrome
 Explanation: The value of the given number(1331) and it's reverse(1331) is same.
 Input: n = 123
 Output: Not Palindrome
 Explanation: The value of the given number(123) and it's reverse(321) is not same.
*/

#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(int n) {
 int rev = 0;
 for(int i=n; i>0; i/=10) {
  rev = (rev*10) + (i%10);
 }
 return rev==n;
}

int main() {
 int n = 1331;
 if(checkPalindrome(n))
  cout << "Palindrome";
 else
  cout << "Not Palindrome";
 return 0;
}
