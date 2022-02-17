// In-lecture question
// way too repetitve and not accoring to my liking

#include <iostream>
#include <string.h>
#include <utility>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){

	string str,ans;
	cin>>str;
					 //x y
	pair<int,int> iCod(0,0),fCod(0,0);
	
	int len=str.length();
	int countW=0,countE=0,countS=0,countN=0;
	for(int i=0;i<len;i++){
		if(str[i] == 'N') countN++;
		else if(str[i] == 'W') countW++;
		else if(str[i] == 'E') countE++;
		else countS++;
	}
	// Checking the quadrant
	countW = -countW;
	countS = -countS;

	int x = countN  +countS;
	int y = countW + countE;
	 
	cout<<ans<<endl;

	return 0;
}