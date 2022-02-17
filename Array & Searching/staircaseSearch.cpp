// staircase search is O(N+M) method to find key in sorted array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(int arr[][4],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;	
}

vector<int> search(int arr[][4],int n,int key){
		int row=0,col=n-1;					//{row,column}
		vector<int> ans(2,-1);

		if(key>arr[n-1][n-1] or key<arr[0][0]) return ans;
		while(true){
			if(arr[row][col]>key){
				col--;
			}
			else if(arr[row][col]<key){
				row++;
			}
			else if(arr[row][col]==key){ // When we found the key!
				ans[0]=row;
				ans[1]=col;
				return ans;
			}
			else if(row>n-1 or col<0) break;
		}
			return ans;
}
		


int main(){

	int arr[][4] = {
		{10,20,30,40},
		{15,25,35,45},
		{27,28,37,48},
		{32,33,39,50}
	};
	
	printArray(arr,4);

	vector<int> ans;
	ans = search(arr,4,48);

	if(ans[0] == -1) cout<<"The key was not found in the Matrix\n";
	else cout<<"The key is found at row: "<<ans[0]+1<<" and column: "<<ans[1]+1<<endl;

	return 0;
}