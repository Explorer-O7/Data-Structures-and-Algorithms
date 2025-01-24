/*
The below code example rotates the given matrix by 90 degrees in clock-wise direction. The rotateMatrix takes one argument, a 2-dimensional vector of integer type, it rotates the given 2-dimensional vector by 90 degrees in clock-wise direction.
Example:
 Input: matrix[][] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}
 Output: {{15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}}
 Explanation: Rotated the given matrix by 90 degree clockwise.
*/

#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix) {
 int n = matrix.size();
 for(int i=0; i<n; i++) {
  for(int j=i; j<n; j++) {
   swap(matrix[i][j], matrix[j][i]);
  }
 }
 for(int i=0; i<n; i++) {
  reverse(matrix[i].begin(), matrix[i].end());
 }
}

int main() {
 vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
 rotateMatrix(matrix);
 for(int i=0; i<matrix.size(); i++) {
  for(int j=0; j<matrix.size(); j++) {
   cout << matrix[i][j] << " ";
  }
  cout << endl;
 }
 return 0;
}
