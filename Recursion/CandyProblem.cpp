// Chocolate and Wrapper Puzzle

// Given the following three values, the task is to find the total number of maximum chocolates you can eat. 
// money: Money you have to buy chocolates
// price: Price of a chocolate
// wrap: Number of wrappers to be returned for getting one extra chocolate.
// It may be assumed that all given values are positive integers and greater than 1.
// Examples:  

// Input: money = 16, price = 2, wrap = 2
// Output:   15



#include <bits/stdc++.h>
using namespace std;


int candies(int price,int each,int wc,int candy=0,int wraper=0){
        

	if(price<each && wraper<wc)
	{
		return candy;
		
	}
    int curcandy=price/each+wraper/wc;
	candies(price%each, each, wc ,candy+curcandy,wraper%wc+curcandy);
}
int main(){
cout<<candies(20,3,4);
//candies(money,priceforeach,wrap_exchangerate)
return 0;	
}