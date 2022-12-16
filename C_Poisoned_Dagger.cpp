#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,h,a,b;
    cin>>n>>h;
    ll v[n];
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    //vector<ll>::k;
    ll k;
    
    ll* x = lower_bound(v,v+n,h);
    ll f=0;
    if(x==v+n ){
        
        a=n-1;
       // cout<<v[a]<<" ";
        b=h-v[a]+v[0]-1;
    }
    else{
  for(ll i=0;i<n;i++){
      if(*x==v[i]){
          if(i==0)  {a=0; f=1;}
         else a=i-1;
      }
  }
  if(f==1)  b=2*h;
  else b=h-v[a]+v[0];
  }
  //cout<<f;
   
  if(b%2!=0)    b++;
  cout<<b/2<<endl;


}
return 0;
}
//REVERSE A LINKED LIST

