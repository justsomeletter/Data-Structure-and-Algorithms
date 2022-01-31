//Program to calculate ncr = n!/(n-r)!*r!. 
//So basically write a function to calcualte factorial

#include <iostream>
#include <stdlib.h>
#include <math.h>
 using namespace std;
int factorial(int num){
int ans = 1;
if(!num) return 1;
for(int i=2;i<=num;i++){
	ans = ans*i;
}
return ans;
};
int main(){
int n,r,ans;
cout<<"Enter the n: ";
cin>>n;

cout<<"Enter the r: ";
cin>>r;

cout<<factorial(n)/(factorial(n-r)*factorial(r))<<endl;
return 0;
}