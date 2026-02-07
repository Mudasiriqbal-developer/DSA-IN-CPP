#include <iostream>
using namespace std;

int maxRowSum(int mat[][3], int rows, int cols) {
  int maxSum = 0;

  for(int i=0; i<cols; i++) {
    int sum = 0;
    for(int j=0; j<rows; j++) {
      sum += mat[i][j];
      
    }
    maxSum = max(maxSum, sum);
  }
    return maxSum;
}

int main(){
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << maxRowSum(mat, rows, cols) << endl;
}