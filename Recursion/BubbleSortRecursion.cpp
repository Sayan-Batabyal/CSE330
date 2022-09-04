#include <bits/stdc++.h>
using namespace std;

void sel(int a[],int l,int r){
if(r==l)
	return;
int min=a[l];
int mini=l;
for(int i=l;i<=r;i++){
if(a[i]<min)
	{min=a[i];
    mini=i;}
}
swap(a[l],a[mini]);
return sel(a,l+1,r);
}

int main(){
int a[]={1,4,2,6,2,7,0};
sel(a,0,6);
for(int i=0;i<7;i++)
cout<<a[i];
return 0;	
}