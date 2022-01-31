//https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
// find 1st occur and last occur of key in an sorted array
#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int firstOcc(int arr[],int size,int key){
	int ans=-1;
	int start=0,end=size-1;
	while(start<=end){
		int mid=(start+end)/2;

		if(key == arr[mid]){
			ans=mid;
			end = mid-1;
		}
		else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
	}
	return ans;
}

int lastOcc(int arr[],int size,int key){
	int ans=-1;
	int start=0,end=size-1;
	while(start<=end){
		int mid=(start+end)/2;

		if(key == arr[mid]){
			ans=mid;
			start = mid+1;
		}
		else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
	}
	return ans;
}

int main(){
			//	0 1 2 3 4
	int arr[]= {2,3,3,3,10,11,16}; // Array should be sorted
	int size = sizeof(arr)/sizeof(int);

	printArray(arr,size);
	int ans = firstOcc(arr,size,3);
	cout<<"The first occurence of 3 is: "<<ans<<endl;

	int last=lastOcc(arr,size,3);
	cout<<"The last occurence of 3 is: "<<last<<endl;

	return 0;
}