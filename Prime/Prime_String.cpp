// PrimeStrings: A string is a primeString if the number of distinct alphabets used in the string is a prime and also the number of occurrences of each alphabet in the string is also a prime.
// Given a String you need to tell if it is a primeString or not.

// Input:
// First line contains T which is the number of test cases.
// T lines follow each containing a string of characters 'a' to 'z'.

// Output:
// For each input, output "YES" if the number is a primeString or "NO" if not.



#include<bits/stdc++.h>
#include<string>
using namespace std;

bool prime(int n){//O(n^1/2)
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
        return true;
}
bool check_frequency(unordered_map<char,int> &m){//O(n)
    for(auto itr:m){
        if(!prime(itr.second))
        return false;
    }
    return  true;
}
int main(){
    unordered_map<char,int> m;
string s;
cout<<"Enter a String : ";
cin>>s;
transform(s.begin(), s.end(),s.begin(), ::toupper);
for(int i=0;i<s.length();i++)//O(n^2)
    m[s[i]]++;
if(prime(m.size()))
{
    if(check_frequency(m))
    cout<<"YES";
    else
    {cout<<"NO";}
}
else{
    cout<<"NO";
}
}

