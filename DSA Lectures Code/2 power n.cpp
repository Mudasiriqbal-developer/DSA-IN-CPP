#include<iostream>
using namespace std;  
int main()  
{  
	int power = 4, base = 3, ans = 1;
	for(int i=1; i<=power; i++) {
		ans *= base;
	} 
	cout<<"The Ans of "<<base<<"^"<<power<<"  is : "<<ans;
}
