// Printing All Sub-Arrays of an Array
// # sub-array: nC2

#include <iostream>

using namespace std;

void printSubArray(int arr[],int n){
	for(int start=0;start<n;start++){
		for(int end=start;end<n;end++){
			cout<<"{";
			for(int temp=start;temp<=end;temp++){
				cout<<arr[temp]<<" ";
			}
			cout<<"}";
			cout<<endl;
		}
		cout<<endl;
	}
}

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Array Before: ";
	for(int x: arr) cout<<x<<" ";
	cout<<"\n";

	printSubArray(arr,size);

	return 0;
}