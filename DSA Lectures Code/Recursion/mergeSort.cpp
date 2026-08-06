#include <iostream>
#include <vector>
using namespace std; 

// to the run the code in the terminal use these commonds.
// g++ -std=c++11 mergeSort.cpp -o mergeSort.exe; .\mergeSort.exe

void merge(vector<int>& arr, int st, int mid, int end) {
  vector<int> temp;
  int i = st, j = mid + 1;
  while(i<=mid && j<=end) {
    if(arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    } else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  // left
  while(i <= mid) {
    temp.push_back(arr[i]);
    i++;
  }
  // right
  while(j <= end) {
    temp.push_back(arr[j]);
    j++;
  }

  for(int idx=0; idx<temp.size(); idx++) {
    arr[idx + st] = temp[idx];
  }
}

void mergSort(vector<int>& arr, int st, int end) {
  if(st < end) {
    int mid = st + (end - st)/2;
  
    mergSort(arr, st, mid);  // Left
    mergSort(arr, mid+1, end);  // Right
    merge(arr, st, mid, end);
  }
  
}

int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17, 5};
    
    mergSort(arr, 0, arr.size()-1);

    for(int val : arr) {
      cout << val << " ";
    }
    cout << endl;
    return 0;
}