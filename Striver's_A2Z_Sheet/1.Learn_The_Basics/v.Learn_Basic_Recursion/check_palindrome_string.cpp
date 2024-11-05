/*
The below code example checks whether the given string is palindrome or not using recursion. The isPalindrome fucntion takes two argument, one is a string & second is an integer, it checks for palindrome string and returns the result accordingly.
Example:
 Input: str = "ABCDE"
 Output: Not Palindrome
 Explanation: "ABCDE" != "EDCBA"
 Input: str = "ABCDCBA"
 Output: Palindrome
 Explanation: "ABCDCBA" = "ABCDCBA"
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int i) {
 if(i>=s.length()/2)
  return true;
 if(s[i]!=s[s.length()-i-1])
  return false;
 return isPalindrome(s,i+1);
}

int main() {
 string str = "ABCDCBA";
 if(isPalindrome(str, 0))
  cout << "Palindrome";
 else
  cout << "Not Palindrome";
 return 0;
}
