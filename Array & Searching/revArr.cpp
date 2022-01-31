#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void reverse(int arr[],int size){
	int start=0,end=size-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
	int arr[] = {2,9,5,0,7,1};
	int size = sizeof(arr)/sizeof(int);

	cout<<"Before:\n";
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
	
	reverse(arr,size);
	cout<<endl;

	cout<<"after:\n";
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
		cout<<endl;
	return 0;
}