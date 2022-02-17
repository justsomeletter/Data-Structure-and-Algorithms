#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

void printArray(int arr[][4],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;	
}
void printVector(vector<vector<int>>& arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){

	vector<vector<int>> arr{
		{1,2,3,4},
	 	{5,6,7,8},
	 	{9,10,11,12},
	 	{13,14,15,16}
		// {1,2,3},
		// {4,5,6},
		// {7,8,9}
	 };
	 int n=4;
	 
	 printVector(arr,n);

	 // swap about the diagonal

	 for(int row=0;row<n;row++)
	 	for(int col=0;col<row;col++)
	 		swap(arr[row][col],arr[col][row]);
	 
	 for(int row=0;row<n;row++){
	 	reverse(arr[row].begin(),arr[row].end());
	 }

	printVector(arr,n);
	
	 return 0;
}
