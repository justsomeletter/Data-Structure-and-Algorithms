#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int countBits(int n){
	int count=0;
	while(n){
		int rem = n&1;
		if(rem) count++;
		n =n>>1;
	}
	return count;
}
int countBits2(int n){
	int count=0;
	while(n>0){
		n = n &(n-1);
		count++;
	}
	return count;
}
int main(){
	int n=120;
	cout<<countBits(n)<<endl;
	cout<<countBits2(n)<<endl;

	return 0;
}