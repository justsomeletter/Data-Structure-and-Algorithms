//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#

#include <iostream>
#include <string>
using namespace std;
int main(){
	string S = "pqr.mno";
	int size = S.size(),count=0;
      string arr[size],ans;
       for(int i=0;i<size;i++){
         if(S[i] == '.'){
           count++;
           arr[count].push_back('.');
           count++;
         }
         else{
            arr[count].push_back(S[i]);
         }
        }
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        string temp;
        temp += arr[2]+arr[1]+arr[0];
        cout<<temp<<endl;
	return 0;
}