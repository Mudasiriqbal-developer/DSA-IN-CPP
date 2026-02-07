#include <iostream>
#include <vector>
using namespace std;
int main()
{
    class Solution
    {
    public:
        bool containsDuplicate(vector<int> &nums)
        {
            unordered_set<int> seen;

            for (int x : nums)
            {
                if (seen.count(x))
                {
                    return true; // duplicate found
                }
                seen.insert(x);
            }

            return false; // no duplicates
        }
    };
}
