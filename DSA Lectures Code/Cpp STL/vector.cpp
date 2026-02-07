#include<iostream>
#include<vector>
using namespace std;
main () {
    vector<int> vec;
    // Insert elements in the last of the vector.
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // Remove the element from the last of the vector.
    vec.pop_back();

    // emplace_back is the same as push_back.
    vec.emplace_back(6);

    // For each loop to print the elements of the vector.
    for(int val : vec) {
        cout<<val<<" ";
    }

    // Size and capacity of the vector.
    cout<<"Size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

    // Accessing the element at index 2.
    cout << "Element at index 2: "<<vec.at(2) << "  or  " << vec[2]<<endl;

    // Accessing the first and last element of the vector.
    cout << "Front element: "<<vec.front()<<endl;
    cout << "Back element: "<<vec.back()<<endl;
}