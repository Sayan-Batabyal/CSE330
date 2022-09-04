// An additive number is a string whose digits can form an additive sequence.
// A valid additive sequence should contain at least three numbers. Except for the first two numbers, each subsequent number in the sequence must be the sum of the preceding two.
// Given a string containing only digits, return true if it is an additive number or false otherwise.
// Note: Numbers in the additive sequence cannot have leading zeros, so sequence 1, 2, 03 or 1, 02, 3 is invalid.


#include <bits/stdc++.h>
using namespace std;

    bool check(long long n1,long long n2,string s, bool found){
        
        if(s.length()==0 && found)
            return true;
        
        string n3=to_string(n1+n2);
        int indx=min(n3.length(),s.length());
        
        if(n3==s.substr(0,indx))
            return check(n2,stol(n3),s.substr(indx),true);
        
        return false;
        
    }
    
    int main(){
        string num;
        cin>>num;
        int n=num.length();
        for(int i=1;i<=n/2;i++)
        {   
            long long num1=stol(num.substr(0,i));
            
            if(to_string(num1)!=num.substr(0,i))
                break;
        
        for(int j=i+1;j<=(n+i)/2;j++)
        {
            long long num2=stol(num.substr(i,j-i));
            
            if(to_string(num2)!=num.substr(i,j-i))
                break;
            
            bool found= check(num1,num2,num.substr(j),false);
            
            if(found) 
                   {cout<<"Additive String";
                                            return 0; }
            
        }    
        
    } 
        
        cout<<"Not an Additive string";
    return 0;
}


