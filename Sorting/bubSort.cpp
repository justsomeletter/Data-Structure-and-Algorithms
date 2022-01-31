// Bubble Sort. TF I am trying so hard 

#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bubSort(int arr[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
		}
	}
}
int main(){

	int arr[]={10,-3,-20,4,-3,5,9};
	int size = sizeof(arr)/sizeof(int);

	bubSort(arr,size);
	printArray(arr,size);

	return 0;
}