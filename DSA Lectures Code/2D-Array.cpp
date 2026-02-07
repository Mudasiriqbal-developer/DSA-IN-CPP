#include <iostream>
using namespace std;

// bool linearSearch(int matrix[][3], int rows, int cols, int tar)
// {
//   for (int i = 0; i < rows; i++)
//   {
//     for (int j = 0; j < cols; j++)
//     {
//       if (matrix[i][j] == tar)
//       {
//         cout<< "Element found at index (" << i + 1 << ", " << j + 1 << ")\n";
//         return true;
//       }
//     }
//   }
//   cout << "Element not found\n";
//   return false;
// }

// Calculate Maximum sum of row in 2D array
int maxSumRow(int matrix[][3], int rows, int cols){
  int maxSum = INT_MIN;

  for(int i = 0; i < rows; i++){
    int sum = 0;
    for(int j = 0; j < cols; j++){
      sum += matrix[i][j];
    }
    maxSum = max(maxSum, sum);
  }
  return maxSum;
}

int main()
{
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int matrix[4][3]; // for user input
  int rows = 3;
  int cols = 3;

  // Call linear search function
  // cout << linearSearch(matrix, rows, cols, 5);
  // Call max sum of row function
  cout << "Maximum sum of row: " << maxSumRow(matrix, rows, cols) << endl;

  // Input 2D array from user
  // for(int i=0; i<rows; i++) {
  //   for(int j=0; j<cols; j++) {
  //     cin >> matrix[i][j];
  //   }
  // }

  // Output the 2D array
  // for(int i=0; i<rows; i++) {
  //   for(int j=0; j<cols; j++) {
  //     cout << matrix[i][j] << " ";
  //   }
  //   cout<<endl;
  // }
}