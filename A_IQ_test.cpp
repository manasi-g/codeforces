#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,e=0,o=0,m=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++) {   
    cin>>a[i];
    if(a[i]%2==0)   e++;
    else o++;
    }
  if(e==1){
      for(int i=0;i<n;i++) {   
    
    if(a[i]%2==0)   m=i;
    
    }
  }  
  else if(o==1){
      for(int i=0;i<n;i++) {   
    
    if(a[i]%2==1)   m=i;
    
    }
  }
  cout<<m+1;
return 0;
}
