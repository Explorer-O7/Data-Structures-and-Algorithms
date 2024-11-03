/*
The below code example prints a name for the given number of times using recursion. The printName function takes an integer as an argument and prints 'Explorer' until the base condition (n<1) is not met.
*/

#include<bits/stdc++.h>
using namespace std;

void printName(int n) {
 if(n<1) return;
 cout << "Explorer" << " ";
 printName(n-1);
}

int main() {
 int n = 5;
 printName(n);
 return 0;
}
