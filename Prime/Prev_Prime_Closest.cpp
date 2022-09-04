// Nearest prime number in the array of every array element
// Given an integer array arr[] consisting of N integers, the task is to find the nearest Prime Number in the array for every element in the array. If the array does not contain any prime number, then print -1. 
// Examples: 
// Input: arr[] = {1, 2, 3, 1, 6} 
// Output: 2 2 3 3 3 
// Explanation: 
// For the subarray {1, 2}, the nearest prime number is 2. 
// For the subarray {3, 1, 6}, the nearest prime number is 3.

// Input: arr[] = {8, 7, 12, 15, 3, 11} 
// Output: 7 7 7 3 3 11 

#include<bits/stdc++.h>
using namespace std;
bool prime(int n){//O(n^1/2)
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
        return true;
}

int main(){
    vector<int> array;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
      {cin>>data;
      array.push_back(data);
      }

    unordered_map<int,int> primes; 
    for(int i=0;i<n;i++){if
    (prime(array[i]))
    primes[i]=1;
    else
    primes[i]=-1;
    }

    for(int i=0;i<n;i++)
    if(!prime(array[i]))
    {
        if(i==0)
        {
        for(int j=1;j<n;j++)
        if(primes[j]==1)
        {array[i]=array[j];
        break;}
        }
        else if(i==n-1)
        {
        for(int j=i-1;j>=0;j--)
        if(primes[j]==1)
        {
        array[i]=array[j];
        break;}
        }
        else{
            for(int j=i-1,k=i+1;j>=0,k<n;j--,k++){
                if(primes[j]==1)
                {array[i]=array[j];break;}
                else if(primes[k]==1){array[i]=array[k];break;}
                else
                ;
            }
        }
    }
    cout<<"\n The Required Array: [ ";
    for(auto itr:array){
        cout<<itr<<" ";
    }  
    cout<<"]";
}