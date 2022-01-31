// Leetcode 69

#include <iostream>

using namespace std;

void creatArray(int arr[],int size){
	int count=1;
	for (int i = 0; i < size; ++i){
		/* code */
		arr[i] = count;
		count++;
	}
}

void printArray(int arr[],int size){
	for (int i = 0; i < size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int findRoot(int arr[],int size){
	int start=0,end=size-1;
	int temp=size,ans=-1;
	while(start<=end){
		int mid = (arr[start]+arr[end])/2;
		if(temp<(mid*mid)){
			end = mid-1;
		}
		else if(temp >(mid*mid)){
			start = mid+1;
			ans=mid;
		}
		else return mid*mid;
	}
	return ans;	
}

int main(){

	int num=8;
	int arr[num];

	creatArray(arr,num);
	cout<<"The Array Comes out to be: ";
	printArray(arr,num);

	int ans = findRoot(arr,num);
	cout<<"The Root might be: "<<ans<<endl;
	return 0;
}