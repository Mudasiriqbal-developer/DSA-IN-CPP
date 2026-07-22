#include <iostream>
using namespace std;   

// to the run the code in the terminal use these commonds.
// 1rst: g++ <file name>.cpp -o <file name>.exe  
// press enter and then write the 2nd commond in the terminal
// 2nd: .\<file name>.exe

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}

int main() {
    int n;
    cin>>n;
    print(n);
    return 0;
}