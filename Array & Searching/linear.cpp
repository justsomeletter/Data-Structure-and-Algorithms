// Linear search

#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
 int pos=-1;
bool linear(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(arr[i] == element){
			pos = i;
			return true;
		}
	}
	return false;
}
int main(){
	int arr[] = {2,6,-2,7,1,0,8,-5,5,0},key;
	// Find -5 in it.
	cout<<"Enter the key: ";
	cin>>key;
	if(linear(arr,10,key)) cout<<"Found it\t at "<<pos<<endl;
	else cout<<"not found!\n";
		return 0;
}