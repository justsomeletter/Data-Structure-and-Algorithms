#include <iostream>

using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int selectionSort(int arr[],int n){ // Max approach
	int count=0;
	for(int i=0;i<n-1;i++){ // Number of iteration: (n-1) times
		int lastIndex=n-i-1,maxPos=0;
		for( int j=1;j<n-i;j++){ // Find the maximum in an array in unsorted part only!
			count++; // Number of times control of flow was here!
			if(arr[j]>arr[maxPos]) maxPos=j; // updating maxPos with index having maximum element
		}
		swap(arr[maxPos],arr[lastIndex]);
	}
	printArray(arr,n);
	return count;
}

int main(){

	int arr[] = {5,4,3,2,1};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Array Before: ";
	printArray(arr,size);

	cout<<"Array After: ";
	int num=selectionSort(arr,size);
	cout<<"Number of times loop run: "<<num<<" times"<<endl;

	return 0;
}