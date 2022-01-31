// Binary Search Implementation. 
// Time Complexity: O(n) , space complexity: O(1)

#include <iostream>

using namespace std;

int binarySearch(int arr[],int n,int key){
	int start=0,end=n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]>key){
			end = mid-1;
		}
		else if(arr[mid]<key){
			start=mid+1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
 //void printArray(int ar)
int main(){

	int arr[]={3}; // Array must be sorted
	int size = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;
	cout<<binarySearch(arr,size,key)<<endl;
	return 0;
}