#include <iostream>
#include <vector>
using namespace std;   

// to the run the code in the terminal use these commonds.
// g++ -std=c++11 permutation-str.cpp -o permutation-str.exe; .\permutation-str.exe


// Check if an array is sorted. 
void getPerms(vector<int> &nums, int idx, vector<vector<int>> &ans) {
        
        if(idx == nums.size()) {
            ans.push_back({nums});
            return;
        }

        for(int i=idx; i<nums.size(); i++) {
            swap(nums[idx], nums[i]);
            getPerms(nums, idx+1, ans);

            swap(nums[idx], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> num = {1,2,3};
        getPerms(nums, 0, ans);
        return ans;
    }
