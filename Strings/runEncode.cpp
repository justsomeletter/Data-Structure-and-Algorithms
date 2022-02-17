// Given a string str = "abbcccd" WAF to convert it into "a1b2c3d1";

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

string compressString(string str){
	int n=str.size();
	string ans;
	sort(str.begin(),str.end()); // O(nlogn)

	for(int i=0;i<n;i++){ // O(n)
		ans += str[i];
		int count=1;
		while(i<n-1 and str[i] == str[i+1]){
			count++;
			i++;
		}
		ans += to_string(count);
	}
	return ans;
}

int main(){

	string str ="aabbbcd";
	cout<<"String Before: "<<str<<endl;
	string ans=compressString(str);
	cout<<"String After: "<<ans<<endl;

	return 0;
}