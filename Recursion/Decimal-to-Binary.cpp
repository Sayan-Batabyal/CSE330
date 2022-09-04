#include <bits/stdc++.h>
using namespace std;

int bindec(long long a,int k=0){
if(a==0)
	return 0;
return a%10*pow(2,k)+bindec(a/10,k+1);
}

int decbin(long long a){
	if(a==1)
		return 1;
	return (decbin(a/2))*10+a%2;
}

int main(){
cout<<bindec(111)<<endl;
cout<<decbin(5);
return 0;	
}