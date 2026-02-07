#include<iostream> 
#include<vector>
using namespace std;
int main () {
    vector<int> vec = {1, 2, 3, 4, 5};

    // erase the element from the vector.
    // vec.erase(vec.begin() + 1, vec.begin() + 3);

    // insert the element in the vector.
    vec.insert(vec.begin() + 2, 10);


    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}