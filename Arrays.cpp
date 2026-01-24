#include<iostream>
using namespace std;
int main() {
//	 int marks[10] = {-100,20,9,40,12,23,45,67,32,50};
//	
//	int size = 10;
//	int max = marks[0]; 
//	int min = marks[0];
//	for(int i=0; i<size; i++) {
//		if(marks[i]>max) {
//			max = marks[i];
//		}
//	}
//		cout<<"Maximum No In An Array Is: "<<max<<endl;
//		
//	for(int i=0; i<size; i++) {
//		if(marks[i]<min) {
//			min = marks[i];
//		}
//	}
//	cout<<"Manimum No In An Array Is: "<<min<<endl;
	
	
// Linear Search;

//	int marks[] = {100,20,9,40,12,23,45,67,32,50};
//	int target = 120;
//	int size = 1
//	0;
//	for(int i=0; i<size; i++) {
//		if(marks[i] == target) {
//			cout<<i;
//		}
//	}
//	cout<<"Not Found";


// Reverce Array;

	int arr[] = {100,20,9,40,12,23,45,67,32,50};
	int sz = 10;
	int start = 0, end = sz-1;
	
	for(int i=0; i<sz; i++){
		cout<<arr[i]<<", ";
	}
	cout<<endl;
	
	while(start < end) {
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	for(int i=0; i<sz; i++){
		cout<<arr[i]<<", ";
	}
}