#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main()
{
  fast 
  ll n,q;
  cin>>n>>q;
  ll a[n],s=0;
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
    s+=a[i];
  }
  ll t1=0,c=0,ans=0;
  bool b=0;
  // set<ll> d;
  map<ll,ll> m;
  for(ll i=0;i<n;i++)
  {
    m[i]=a[i];
  }
  while(q--)
  {
    ll t;
    cin>>t;
    ll x,x1=0;
    ll s1=s;
    if(t==1)
    {
      cin>>x>>x1;
      x--;
      if(b==1 && m.find(x)==m.end())
      {
        s=s-ans;
        s=s+x1;
        m[x]=x1;
      }
      else
      {
        s=s-m[x];
        s=s+x1;
        m[x]=x1;
      }
    }
    else
    {
      cin>>x;
      s=n*x;
      b=1;
      ans=x;
      m.clear();
    }
    c++;
    cout<<s<<endl;
  }
  return 0;
}