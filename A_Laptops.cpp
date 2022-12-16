#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main()
{
  fast 
  ll n,alex=0;
  cin>>n;
  vector<pair<ll,ll>> v;
  ll a,b;
  for(ll i=0;i<n;i++)
  {
    cin>>a>>b;
    v.push_back(make_pair(b,a));
  }

  sort(v.begin(),v.end());
  for(ll i=0;i<n-1;i++)
  {
    if(v[i+1].second<v[i].second)
    {
      alex=1;
      break;
    }
  }
  if(alex==1)   cout<<"Happy Alex";
  
  else  cout<<"Poor Alex";
  
  return 0;
}

