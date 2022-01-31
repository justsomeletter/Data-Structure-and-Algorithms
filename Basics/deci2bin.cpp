//Porgram to convert a binary number to secondary number

#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;


int main(){
	int num;
	cin>>num;
	int i=0,ans=0;
	while(num){
		int bit = num&1;
		ans = pow(10,i)*bit + ans;
		num = num>>1;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}