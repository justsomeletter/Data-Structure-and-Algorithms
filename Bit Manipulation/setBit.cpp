#include <iostream>

using namespace std;

int setI(int num,int pos){
	int temp= (1<<pos);
	return (num|temp);
}

int main(){

	int x,pos;
	cin>>x>>pos;

	cout<<setI(x,pos)<<"\n";

	return 0;
}