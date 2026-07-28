#include <iostream>
#include <vector>
using namespace std;   

// to the run the code in the terminal use these commonds.
// g++ -std=c++11 print-substes.cpp -o print-substes.exe; .\print-substes.exe


// Print all possible subsets of the array.

void printSubstes(vector<int> &arr, vector<int> &ans, int i){
  if(i == arr.size()) {
    for(int val : ans) {
      cout << val << " ";
    }
    cout <<", ";
    return;
  }

  // include
  ans.push_back(arr[i]);
  printSubstes(arr, ans, i+1);

  ans.pop_back(); // backtracking

  // exclude
  printSubstes(arr, ans, i+1);
}

int main() {
  vector<int> arr = {1, 2, 3};
  vector<int> ans; // store subsets.

  printSubstes(arr, ans, 0);
  return 0;
}