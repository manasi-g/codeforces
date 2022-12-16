#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,flag=0,l;
    cin>>n;
    vector<ll>a;
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll r;
        cin>>r;
        a.push_back(r);
        m[r]++;
    }
    vector<vector<ll>>v;
    v.push_back(a);
    for(ll i=0;i<=n;i++)
    {
      for(ll j=0;j<n;j++)
      {
        a[j]=m[a[j]];
      }
      m.clear();
      for(ll j=0;j<n;j++)
      {
        m[a[j]]++;
      }
      v.push_back(a);
    }
    ll q;
    cin>>q;
    while(q--){
        ll l,e;
    cin>>l>>e;
    if(e>=n){
        cout<<v[n][l-1]<<endl;
    }
    else{
        cout<<v[e][l-1]<<endl;
    }
    }
}
return 0;
}
