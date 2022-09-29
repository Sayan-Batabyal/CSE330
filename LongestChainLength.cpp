#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
int main(){
//----------------Input----------------------------	
int n;
cin>>n;
vector<vector<int>>pairs(n,{0,0});
  for(int i=0;i<n;i++)
   { cin>>pairs[i][0];
     cin>>pairs[i][1];
      }

//--------------------------------------------------

  sort(pairs.begin(),pairs.end(),cmp);
 
  int prev=pairs[0][1];
  int cnt=1;
        
    for(int i=1;i<n;i++)
        if(prev<pairs[i][0])
            {
              prev=pairs[i][1];
              cnt++;
            }
       
    cout<<"Max Length: "<<cnt;
 
return 0;	
}
