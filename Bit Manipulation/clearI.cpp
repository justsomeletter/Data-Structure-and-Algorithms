// program to clear the ith bit i.e
//	 convert the ith bit to zero.

#include <iostream>

using namespace std;

int clear_I(int num,int pos){
	int temp= ~(1<<pos);
	return (num&temp);
}

int main(){

	int x,pos;
	cin>>x>>pos;

	cout<<clear_I(x,pos)<<"\n";

	return 0;
}