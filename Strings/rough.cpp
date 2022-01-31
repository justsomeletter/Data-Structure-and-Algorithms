#include <iostream>
#include <string>
using namespace std;
int main(){
	string arr[] = {"Rahul"};
	int N =1;
	string ans;
        int temp=0,count=0;
        bool cond = true;
        int min_l=INT_MAX;
        for(int i=0;i<N;i++){
            min_l = arr[i].size()<min_l ? arr[i].size() : min_l;
        }
        while(cond and N != 1){
            for(int i=0;i<N-1;i++){
                if(arr[i][count] != arr[i+1][count] or count>=min_l){
                    cond=false;
                    break;
                }
            }
            if(cond){
	            ans.push_back(arr[0][count]);
	            count++;
	        }
        }
        if(ans == "\0") cout<<-1<<endl;
        else cout<<ans<<endl;
	return 0;
}