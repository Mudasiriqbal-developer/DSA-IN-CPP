#include<iostream> 
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main () {
    deque<int> d = {1,2,3,4,5};

    // l.push_back(1);
    // l.emplace_back(2);
    // l.push_front(3);
    // l.push_front(4);

    // l.pop_back();
    // l.pop_front();

    for(int val : d) {
        cout<<val<<" ";
    }

    cout<<d[2];

    return 0;
}