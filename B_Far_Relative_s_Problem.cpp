#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
fast
ll t,m=0,f=0,u=0;
cin>>t;
ll y[366]={0},x[366]={0};
for(ll i=0;i<t;i++)
{
  string s;
  ll a,b;
  cin>>s>>a>>b;
  for(ll i=a;i<=b;i++){
      if(s=="M")    x[i]++;
      else  y[i]++;
  }  
  for(ll i=1;i<=366;i++){
      u=max(u,min(x[i],y[i]));
  }
  //f=0; m=0;
}
cout<<2*u;
return 0;
}
