
// Given coordinates of a source point (x1, y1) determine if it is possible to reach the destination point (x2, y2). From any point (x, y) there only two types of valid movements: 
// (x, x + y) and (x + y, y). Return a boolean true if it is possible else return false. 
// Note: All coordinates are positive. 
// O(2^n) Soln:
#include <bits/stdc++.h>
using namespace std;

bool stepcheck(int x , int y, int d1 , int d2)
{
	if((x>d1)||(y>d2))
		return false;
	if(x==d1&&y==d2)
		return true;

	bool a=stepcheck(x+y,y,d1,d2);
	bool b=stepcheck(x,x+y,d1,d2);
     
     return (a||b);
    
}

int main(){
int x,y,d1,d2;	
cin>>x>>y>>d1>>d2;
cout<<stepcheck(x,y,d1,d2);
return 0;	
}
