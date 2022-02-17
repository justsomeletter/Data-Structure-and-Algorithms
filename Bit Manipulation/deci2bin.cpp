#include <iostream>

using namespace std;

int bin2dec(int num){
	int ans=0,p=1;
	while(num){
		int last_bit= num&1;
		ans= ans+last_bit*p;
		p=p*10;
		num=num>>1;
	}
	return ans;
}

int main(){

	int num;
	cin>>num;
	cout<<bin2dec(num)<<endl;
	return 0;
}