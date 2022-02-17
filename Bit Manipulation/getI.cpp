// Get Bit at asked position.
// for ex: num=5(00101) and pos=2(0-based index from right) then answer will be 1

#include <iostream>

using namespace std;

int getPos(int num,int pos){
	int temp= 1<<pos;
	return (num&temp)?1:0;
}

int main(){

	int x,pos;
	cin>>x>>pos;

	cout<<getPos(x,pos)<<"\n";

	return 0;
}