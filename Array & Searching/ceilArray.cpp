// Find the smallest element in a sorted array ,
// 	greater or equal to target.
// Ex - {2,3,5,9,14,16,18}

#include <iostream>

using namespace std;

void printArray(int arr[],int size){
	for (int i = 0; i < size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int ceilElement(int arr[],int n,int target){
	int s=0,e=n-1,ans=INT_MAX;
	while(s<=e){
		int m=(s+e)/2;
		if(arr[m]>target){
			ans = min(ans,arr[m]);
			e = m-1;
		}
		else if(arr[m]<target){
			s = m+1;
		}
		else return arr[m];
	}
	return ans;
}

char leetcode(char str[],int n, char target){
	int s=0,e=n-1;
	char ans = 123;
	while(s<=e){
		int m = (s+e)/2;
		if(str[m]>target){
			ans = min(ans,str[m]);
			e = m-1;
		}
		else{
			s = m+1;
		}
	}
	return str[s%n];
}

int main(){

	int arr[] = {2,3,5,9,14,16,18};
	int size = sizeof(arr)/sizeof(int);

	int ans = ceilElement(arr,size,17);
	cout<<"The element is: "<<ans<<endl;


	char str[] = {'a','b','c'};
	int sizeChar = sizeof(str)/sizeof(char);

	char ans2 = leetcode(str,sizeChar,'z');
	cout<<"The character is: "<<ans2<<endl;

	return 0;
}