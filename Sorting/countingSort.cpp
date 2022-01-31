#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void countSort(int arr[],int n){
	int largest = INT_MIN;
	for(int i=0;i<n;i++) largest = max(largest,arr[i]);

	vector <int> freq(largest+1,0);//Initialised an vector with all elements as zero

	for(int i=0;i<n;i++){	// Updated the frequency of each element into the
		freq[arr[i]]++;
	}

	int j=0;
	for(int i=0;i<=largest;i++){ // put the array back into
		while(freq[i]>0){
			arr[j] = i;
			j++;
			freq[i]--;
		}
	}
}

int main(){

	int arr[] = {2,8,4,7,1,5,1};
	int n = sizeof(arr)/sizeof(int);

	cout<<"Enter: ";
	printArray(arr,n);

	countSort(arr,n);
	cout<<"After: ";
	printArray(arr,n);

	return 0;
}