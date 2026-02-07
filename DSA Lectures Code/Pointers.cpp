#include<iostream>
using namespace std;  

// Change the value through reference.
void changeC(int *poin) {
	*poin = 20;
}

int main()  {  

	int c = 10;
	cout<<c<<endl;
	changeC(&c);
	cout<<c<<endl;
	
	int a=10;
	int* ptr = &a;
	int** ptr2 = &ptr;
	
	cout<<*(ptr)<<endl;
	cout<<*(ptr2)<<endl;
	cout<<"_________________"<<endl;
	
	// Practice QUestion.
	int b = 10;
	int *p = &b; 
	int **q = &p;
	int pt = NULL;
	
	cout<<*p<<endl;
	cout<<**q<<endl;
	cout<<p<<endl;
	cout<<*q<<endl;
	cout<<pt;
	
}
