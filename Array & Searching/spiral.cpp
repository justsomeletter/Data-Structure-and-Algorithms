// program to print spiral 2-d array

#include <iostream>

using namespace std;

void printArray(int arr[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}

void spiral(int arr[][3],int n,int m){
	int sRow=0,eRow=n-1,sCol=0,eCol=m-1;

	while(sCol<=eCol){
		for(int col=sCol;col<=eCol;col++){
			cout<<arr[sRow][col]<<" ";
		}
		for(int row=sRow+1;row<=eRow;row++){
			cout<<arr[row][eCol]<<" ";
		}
		for(int col=eCol-1;col>=sCol;col--){
			cout<<arr[eRow][col]<<" ";
		}
		for(int row=eRow-1;row>=sRow+1;row--){
			cout<<arr[row][sCol]<<" ";
		}
		sRow++;
		eRow--;
		sCol++;
		eCol--;
	}
}

int main(){
	// int arr[4][4] = {
	// 	{10,20,30,40},
	// 	{50,60,70,80},
	// 	{90,100,110,120},
	// 	{130,140,150,160}
	// };
	int arr[3][3]={
		{10,20,30},
		{40,50,60},
		{70,80,90}
	};
	
	int n=3,m=3;

	spiral(arr,n,m);
	cout<<endl;

	return 0;
}