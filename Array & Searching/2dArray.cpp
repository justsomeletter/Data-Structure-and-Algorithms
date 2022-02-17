#include <iostream>

using namespace std;

void printArray(char arr[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){

	// int arr[100][100];
	// int n,m; // Rows and columns
	// cin>>n>>m;

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		cin>>arr[i][j];
	// 	}
	// }
	
	//printArray(arr,n,m);

	char str[][10] = {
		"Rahul",
		"Killua",
		"Son_goku",
		"Vageta",
		"Harvey",
		"Mike"
		};

		for(int i=0;i<6;i++){
			cout<<str[i]<<" ";
		}
		cout<<endl;

	 return 0;
}