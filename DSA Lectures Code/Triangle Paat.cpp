#include<iostream>
using namespace std;  
int main()  
{  
//	int n=5;
//	
//	for(int i=1; i<=n; i++) {
//		int num = 1;char ch = 'A';
//		for(int j=0; j<i; j++) {
//			cout<<num<<":";
//			cout<<ch<< " ";
//			ch =ch + 1;
//			num++;
//		}
//		cout<<endl;
//	}
	
	
	
// Reverce Tri-angle Patteren.

//  int n=10;
//	
//	for(int i=1; i<=n; i++) {
//		int num = n;
//		for(int j=0; j<i; j++) {
//			cout<<num<<" ";
//			num--;
//		}
//		cout<<endl;
//	}
	
	
// Floyd's Tri-Angle.
//	int n=10;
//	int num = 1;
//	for(int i=1; i<=n; i++) {
//		
//		for(int j=0; j<i; j++) {
//			cout<<num<<" ";
//			num++;
//		}
//		cout<<endl;
//	}
	
	
// Invert Tri-Angle.

//	int n=5;
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<i; j++) {
//			cout<<" ";	
//		}
//		for(int j=0; j<n-i; j++) {
//				cout<<(i+1)<<" ";
//			}
//		cout<<endl;
//	}


// Paramide Tri Angle.

//	int n=50;
//	for(int i=0; i<n; i++) {
//		for(int j=0; j<n-i-1; j++) {
//			cout<<" ";	
//		}
//		
//		for(int j=1; j<=i+1; j++) {
//				cout<<"*";
//			}
//			
//		for(int j=i; j>0; j--) {
//			cout<<"*";
//		}
//		cout<<endl;
//	}


// Hollow Daimond Tri Angle.

	int n=15;
	for(int i=0; i<n; i++) {
		
		for(int j=0; j<n-i-1; j++) {
			cout<<" ";	
		}
		cout<<"*";
		if(i != 0) {
			for(int j=0; j<2*i-1; j++) {
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
}
// Bottom.
	for(int i=0; i<n-1; i++) {
		
		for(int j=0; j<i+1; j++) {
			cout<<" ";	
		}
		cout<<"*";
		
		if(i != n-2) {
			for(int j=0; j<2*(n-i)-5; j++) {
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
