#include <iostream>
#include <vector>
using namespace std;

int DiagonalSum(int mat[][4], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    // More optimized way having time complexity O(n)
    sum += mat[i][i];
    if (i != n - i - 1)
    {
      sum += mat[i][n - i - 1];
    }

    // Having time complexity O(n^2)
    // for(int j=0; j<n; j++) {
    //   if(i == j) {
    //     sum += mat[i][j];
    //   } else if(j == n-i-1) {
    //     sum += mat[i][j];
    //   }
    // }
  }
  return sum;
}

int main()
{
  vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8, 4, 5, 6}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  // rows = mat.size();
  // cols = mat[0].size();
  for (int i = 0; i < mat.size(); i++)
  {
    for (int j = 0; j < mat[i].size(); j++)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  // int n = 4;
  // int mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
  // cout << DiagonalSum(mat, n) << endl;
}