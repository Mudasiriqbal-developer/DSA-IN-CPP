#include<iostream>
#include<vector>
using namespace std;
int main() {
//	int arr[4] = {-3,7,11,15};
//	int n=4, target = 12;
//	for(int st=0; st<n; st++) {
//		for(int end=st+1; end<n; end++) {
//			if(arr[st]+arr[end] == target) {
//				cout<<"Index1:"<<st<<" & Index2:"<<end<<"  = "<<target;
//				break;
//			} 
//		}
//	}
//	return 0;


// Same Problem With Different Approach;
//	int arr[4] = {-3,7,11,15};
//	int n=4, target = 12;
//	int i=0, j=n-1;
//	while(i<j) {
//		int ps = arr[i] + arr[j];
//		if(ps > target) {
//			j--;
//		} else if(ps < target) {
//			i++;
//		} else {
//			cout<<"Index1:"<<i<<" & Index2:"<<j<<"  = "<<target; 
//			break;
//		}		
//	}	
//	return 0;
	
	
	
	// Majority Elements By Brute's Force Approach;
	int arr[5] = {2,2,1,1,1};
	int n=5;
	for(int i=0; i<n; i++) {
		int freq = 0;
		for(int j=i; j<n; j++) {
			if(j = i) {
				freq++;
			}
		}
		if(freq > n/2) {
			cout<<"The Majority Element is: "<<freq;
			break;
		}
	}
	return 0;
}
