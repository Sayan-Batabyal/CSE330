// Sort Prime/Non Prime in an Array in Increasing order
//  Input: Array [2,3,11,6,7]
// Output: Array [2,3,7,11,6]



#include<bits/stdc++.h>


using namespace std;

bool primer(int n){
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
        
        return true;
}

int main(){
vector<int> prime;
vector<int> non_prime;
vector<int> array;
int size;
cin>>size;
for(int i=0;i<size;i++){
    int c;
    cin>>c;
    array.push_back(c);
}
for(int i=0;i<array.size();i++)
{ 
    if(primer(array[i])){
    prime.push_back(array[i]);}
    else
    non_prime.push_back(array[i]);
}
sort(prime.begin(),prime.end());
sort(non_prime.begin(),non_prime.end());
cout<<"\n[ ";
for(auto itr:prime)
cout<<itr<<" ";
 for(auto itr:non_prime)
 cout<<itr<<" ";
 cout<<" ]\n";
}