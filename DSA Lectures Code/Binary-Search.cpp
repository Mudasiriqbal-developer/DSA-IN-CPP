#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
  int st = 0, end = arr.size() - 1;

  while (st <= end)
  {
    int mid = st + (end - st) / 2;
    if (target > arr[mid])
    {
      st = mid + 1;
    }
    else if (target < arr[mid])
    {
      st = mid - 1;
    }
    else
    {
      return mid;
    }
  }
  cout << "Noting Found" << endl;
}

int main()
{
  vector<int> arr = {-1, 0, 3, 5, 9, 12, 15};
  vector<int> arr2 = {1};
  int tar = 1;
  cout << binarySearch(arr2, tar);
}