#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	int arr[] = {3,9,-10,8,2,19,4,-5};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Before: ";
	printArray(arr,size);

	sort(arr,arr+size); // O(nlogN)
	reverse(arr,arr+size);

	cout<<"After: ";
	printArray(arr,size);

	return 0;
}