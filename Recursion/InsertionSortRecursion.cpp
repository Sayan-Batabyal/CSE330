#include <bits/stdc++.h>
using namespace std;

void ins(int a[],int r,int k){
if(k<r){
int i,temp=a[k];
 for(i=k-1;i>=0;i--)
 {
 	if(a[i]>temp)
		a[i+1]=a[i];
	else break;
 }

 a[i+1]=temp;
 k++;

 ins(a,r,k);

}

}


int main(){
int a[]={1,4,2,6,2,7,0};
ins(a,7,1);
for(int i=0;i<7;i++)
cout<<a[i];
return 0;
	
}