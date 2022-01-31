// Program to reverse a number. This program can reverse upto 9 numbers

#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

int main(){
	int num,revNum=0;
	cin>>num;
	while(num){
		int rem=num%10;
		revNum = 10*revNum +rem;
		num /=10;
	}
	cout<<revNum<<endl;
	return 0;
}