// Minimum steps to reach a destination
// Given a number line from -infinity to +infinity. You start at 0 and can go either to the left or to the right. The condition is that in i’th move, you take i steps. 

// Find if you can reach a given number x 
// Find the most optimal way to reach a given number x, if we can indeed reach it. For example, 3 can be reached in 2 steps, (0, 1) (1, 3) and 4 can be reached in 3 steps (0, -1), (-1, 1) (1, 4)


#include <bits/stdc++.h>
using namespace std;
int step(int cur,int target,int steps ){
	if(cur==target)
		return steps;
	else if(cur>target&&(cur-target)%2==0)
		return steps;

    steps++;  
    cur+=steps;  
    return step(cur,target,steps);
}


int main(){

cout<<step(0,4,0);
}
