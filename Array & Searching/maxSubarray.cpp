//Problems: Find the maximum sum in an subarray.
// My solution is brute force: O(n3)
// optimisation: prefix sum and kadane Algorithm
#include <iostream>

using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

// (i) Brute Force approach
int max_SubArray(int arr[],int size){
	int maxSum=INT_MIN;
	for(int start=0;start<size;start++){
		for(int end=start;end<size;end++){
			int sum=0;
			for(int flag=start;flag<=end;flag++){
				sum += arr[flag];
			}
			maxSum = max(sum,maxSum);
		}
	}
	return maxSum;
}
 
 // Prefix Sum approach: O(n^2)
 int max_SubArray_2(int arr[],int size,int parr[]){
 	int maxSum=INT_MIN;
	for(int start=0;start<size;start++){
		for(int end=start;end<size;end++){
			int sum=0;
			if(start != 0)
				sum = parr[end]-parr[start-1];
			else sum = parr[end];
			maxSum = max(sum,maxSum);
		}
	}
	return maxSum;
 }

// Kadane's Algorithm approach: O(n). beatiful algorithm
 int max_SubArray_3(int arr[],int size){
 	int currentSum=0,maxSum=INT_MIN;
 	for(int i=0;i<size;i++){
 		currentSum += arr[i];
 		maxSum = max(maxSum,currentSum);
 		if(currentSum<0) currentSum=0;
 		
 	}
 	return maxSum;
 }

int main(){
	int arr[] = {-1,4,-5,-9,4,-15,8,0};
	int size = sizeof(arr)/sizeof(int);

	printArray(arr,size);
	// int ans=max_SubArray(arr,size);
	// cout<<"The Maximum Sub Array Sum is: "<<ans<<endl;

	int parr[size] ;
	parr[0]= arr[0];
	for(int i=1;i<size;i++){
		parr[i] = arr[i]+parr[i-1];
	}

	int ans=max_SubArray_3(arr,size);
	cout<<"The Maximum Sub Array Sum is: "<<ans<<endl;

	return 0;
}