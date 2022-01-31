// Program to convert number from binary to decimal

#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

int main(){
	int num,i=0,ans=0;
	cin>>num;
	while(num){
		int digit = num%10;;
		if(digit ==1){
			ans = pow(2,i)+ans;
		}
		num =num/10;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}