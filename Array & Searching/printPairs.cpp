// Printing All pairs of Array

#include <iostream>

using namespace std;

void printPairs(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"("<<arr[i]<<" ,"<<arr[j]<<")"<<endl;
		}
		cout<<endl;
	}
}

int main(){

	int arr[] = {2,9,5,0,7,1};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Array Before: ";
	for(int x: arr) cout<<x<<" ";
	cout<<"\n";

	printPairs(arr,size);

	return 0;
}