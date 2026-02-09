#include<iostream> 
#include<vector>
#include<map>
using namespace std;
int main () {
    multimap<string, int> m;
    m.insert({"apple", 5});
    m.insert({"apple", 5});
    m.insert({"apple", 10});

    
    // m.insert({{"guava", 20}});
    // m.emplace("kiwi", 15);
    // m.erase("apple");

    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    if(m.find("kiwi") != m.end()) {
        cout<<"kiwi is present in the map"<<endl;
    } else {
        cout<<"kiwi is not present in the map"<<endl;
    }
    return 0;
}