// Leetcode: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/

#include <iostream>
#include <math.h>
#include <bitset>
#include <vector>

using namespace std;

int main(){
	vector<string> sent{"Rahul ch","I am doing something","leetcode"};
	int maxi=0,j=0;
	for(int i=0;i<sent.size();i++){
		int temp = count(sent[0].begin(),sent[0].end()," ");
		if(maxi<temp) maxi =temp;
	}
	cout<<maxi<<endl;
	return 0;
}