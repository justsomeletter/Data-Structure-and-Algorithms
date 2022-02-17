#include <iostream>

using namespace std;

int fastExpo(int num,int a){ // 	num^a
	int ans=1;
	while(a>0){
		int last_bit = a&1;
		if(last_bit){
			ans =ans*num;
		}
		num=num*num;
		a= a>>1;
	}
	return ans;
}

int main(){

	int num;
	cout<<fastExpo(5,1232)<<endl;

	return 0;
}