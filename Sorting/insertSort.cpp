// Program to illustarte insertion sort

#include <iostream>

using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int inserSort(int arr[],int n){
	int count=0;
	for(int i=0;i<n-1;i++){ // First loop decides how many time the loop will run : (n-1)
		for(int j=i+1;j>0;j--){ // 
			count++;
			if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
			else break;
		}
	}
	return count;
}
int main(){

	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);

	//cout<<size<<endl;
	cout<<"Array Before: ";
	printArray(arr,size);

	cout<<"Array After: ";
	int runtime=inserSort(arr,size);
	printArray(arr,size);
	cout<<"The loop runs: "<<runtime<<endl;
	return 0;
}