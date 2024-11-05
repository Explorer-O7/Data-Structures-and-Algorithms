/*
The below code example reverses the elements of the given array using recursion. The reverseArray function takes three arguments, an integer type array, and remaining are two integers, it results in an array with reversed elements. There are also some other functions are used as well like printArray function takes an integer array & an integer as arguments and prints the array elements, and another one is swap which takes two addresses of integer type blocks as arguments and swaps their values using call-by-reference.
Example:
 Input: arr = [1,2,3,4,5], n = 5
 Output: 5 4 3 2 1
 Explanation: (Before) [1,2,3,4,5] -> (After) [5,4,3,2,1]
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}

void printArray(int a[], int n) {
 for(int i=0; i<n; i++)
  cout << a[i] << " ";
}

void reverseArray(int a[], int lb, int ub) {
 if(lb<ub) {
  swap(&a[lb], &a[ub]);
  reverseArray(a, lb+1, ub-1);
 }
}

int main() {
 int n = 5;
 int arr[] = {10,20,30,40,50};
 reverseArray(arr, 0, n-1);
 cout << "The reversed array is:-" << endl;
 printArray(arr, n);
 return 0;
}
