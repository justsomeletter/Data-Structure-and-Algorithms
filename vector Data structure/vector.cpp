#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> arr(2);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	arr.push_back(4);
	arr.push_back(12);
	arr.push_back(45);
	arr.push_back(90);

	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}