// Tiling Problem: 
// Given a n by n board where n is of form 2k where k >= 1 (Basically n is a power of 2 with minimum value as 2). The board has to be filled with minimum no of tiles.


#include <bits/stdc++.h>
using namespace std;


void plot(int area,int i){
	if(area==0||i==0)
		return;
	
	int curr=area/(int)pow(pow(2,i),2);
    int rem=area%(int)pow(pow(2,i),2);
    cout<<pow(2,i)<<"\tx\t"<<pow(2,i)<<"\t Tiles  =\t"<<curr<<endl;
    plot(rem,i-1);
}

int main(){

int area;
cin>>area;
int maxi=(int)floor(log2(pow(area,0.5)));
plot(area,maxi);
return 0;	
}