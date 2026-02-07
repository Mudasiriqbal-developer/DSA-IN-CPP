#include<iostream>
#include<vector>
using namespace std;
main() {
//	int arr[5] = {1,2,3,4,5};
//	int n=5;
//	for(int st=0; st<n; st++) {
//		for(int end=st; end<n; end++) {
//			for(int i=st; i<=end; i++) {
//				cout<<arr[i];
//			}
//			cout<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;



// Maximum Subarray Sum;
// By Brude Force Approach; 
//	int n=10;
//	int arr[10] = {1,2,3,4,-5,1,3,-4,-6,10};
//	int maxSum;
//	for(int st=0; st<n; st++) {
//		int currSum = 0;
//		for(int end=st; end<n; end++) {
//			currSum += arr[end];
//			maxSum = max(maxSum, currSum);
//		}
//	}
//	cout<<"The Max SubArray Is: "<< maxSum <<endl;
//	return 0;
	
	
	
// Maximum Subarray Sum;
// By Kadane's Algorithm;

	int n=5;
	int arr[5] = {1,2,3,4,-5};
	int maxSum = INT_MIN;
	int currSum	;
	
		for(int end=0; end<n; end++) {
			currSum += arr[end];
			maxSum = max(maxSum, currSum);
			if(currSum < 1) {
				currSum = 0;
			}
		}
	cout<<"The Max SubArray Is: "<< maxSum <<endl;
	return 0;
}
