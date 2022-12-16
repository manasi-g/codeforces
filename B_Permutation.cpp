#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,c=0;
cin>>n;
ll a[n];
set<ll> s;
  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
    if(a[i]<=n && a[i]>0)
    {
      s.insert(a[i]);
    }
  }
  cout<<n-s.size();
return 0;
}
