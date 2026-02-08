#include<iostream> 
#include<vector>
#include<list>
using namespace std;
int main () {
    // pair<string, int> p = {"hello",2};

    // pairs of vector.
    vector<pair<int, int>> v = {{1,2}, {3,3}, {4,5}};

    v.push_back({5,6});
    v.emplace_back(7,8);

    for(auto p : v) {
        cout<<p.first<<" "<<p.second<<endl;
    }
}