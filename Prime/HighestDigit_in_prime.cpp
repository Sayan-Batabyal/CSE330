
// Find maximum occurrence digit in a range of prime numbers:
// Find most frequent digit among all prime numbers in a given range.
// Example: from 1 to 20, prime numbers are - 2, 3, 5, 7, 11, 13, 17, 19. Here 2, 5, 9 occur only once, 3, 7 occur twice, and 1 occurs 5 times. So the result is 1.


#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
        return true;
}

vector<int> digits(int n)
{   vector<int> digit_array;
    int digit;
    while(n>0)
    {
        digit=n%10;
        digit_array.push_back(digit);
        n=n/10;
    }
    return digit_array;
    
}
int main(){
    int range;
    cin>>range;

    unordered_map<int,int> n;
    for(int i=2,j=0;i<range;i++)
    {
      if(prime(i)){
          vector<int> array_digit=digits(i);
          for(auto itr:array_digit)
              n[itr]++;
          
      }
    }

    int max=0;
    int max_digit=-1;
    for(auto itr:n){
        cout<<itr.first<<itr.second<<endl;
        if(itr.second>max)
       { max=itr.second;
       max_digit=itr.first;
       }
    }
    cout<<"Highest Digit:"<<max_digit<<endl;
}
// check for prime stringS