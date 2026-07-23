#include <iostream>
#include <vector>
using namespace std;   

// to the run the code in the terminal use these commonds.
// g++ -std=c++11 isSorted.cpp -o isSorted.exe; .\isSorted.exe


// Check if an array is sorted. 
bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main() {
    vector<int> arr = {1,2,8,4,5};

    cout<< isSorted(arr, arr.size()) <<endl;
    return 0;
}