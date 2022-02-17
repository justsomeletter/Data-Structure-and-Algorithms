#include <iostream>

using namespace std;

int main(){
	
	int n=15;
	if(n & (n-1)) cout<<"Not in power of 2\n";
	else cout<<"Yes! in power of 2\n";

	return 0;
}