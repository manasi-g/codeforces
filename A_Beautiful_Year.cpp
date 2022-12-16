#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n;
cin>>n;

for(int i=n+1;i<=9012;i++){
     stringstream ss;  
  ss<<i;  
  string k;  
  ss>>k;
  
     if(k[0]!=k[1] && k[1]!=k[2] && k[2]!=k[3] && k[0]!=k[2] && k[0]!=k[3] && k[1]!=k[3]){
        cout<<k;
        break;
    } 
    //cout<<k;
  }  
  }
    
