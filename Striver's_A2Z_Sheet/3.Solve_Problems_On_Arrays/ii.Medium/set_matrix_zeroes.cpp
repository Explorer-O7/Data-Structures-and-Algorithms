/*
The below code example modifies the given 2-dimensional array such that, if an element in the matrix is 0 then it will set its entire row & column to 0. The setMatrixZeroes function takes one argument, a 2-dimensional integer vector, it sets the entire row & column 0 of a zero element.
Example:
 Input: matrix[] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}
 Output: {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}}
 Explanation: Since matrix[2][2]=0, therfore the second row and second column wil be set to 0.
*/

#include<bits/stdc++.h>
using namespace std;

void setMatrixZeroes(vector<vector<int>>& matrix) {
 int n=matrix.size(), m=matrix[0].size();
 bool flag1=false, flag2=false;
 for(int i=0; i<n; i++) {
  if(matrix[i][0] == 0)
   flag1 = true;
 }
 for(int j=0; j<m; j++) {
  if(matrix[0][j] == 0)
   flag2 = true;
 }
 for(int i=1; i<n; i++) {
  for(int j=1; j<m; j++) {
   if(matrix[i][j] == 0) {
    matrix[i][0] = matrix[0][j] = 0;
   }
  }
 }
 for(int i=1; i<n; i++) {
  for(int j=1; j<m; j++) {
   if(matrix[i][0]==0 || matrix[0][j]==0) {
    matrix[i][j] = 0;
   }
  }
 }
 if(flag1) {
  for(int i=0; i<n; i++) {
   matrix[i][0] = 0;
  }
 }
 if(flag2) {
  for(int j=0; j<m; j++) {
   matrix[0][j] = 0;
  }
 }
}

int main() {
 vector<vector<int>> matrix = {{1,2,3,4}, {5,0,7,8}, {0,10,11,12}, {13,14,15,0}};
 setMatrixZeroes(matrix);
 for(int i=0; i<matrix.size(); i++) {
  for(int j=0; j<matrix[0].size(); j++) {
   cout << matrix[i][j] << " ";
  }
  cout << endl;
 }
 return 0;
}
