#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,c=0,flag=0,a,b;
cin>>n>>m;
vector<pair<ll,ll>> v;
for(ll i=0;i<n;i++){
   cin>>a>>b;
   v.push_back(make_pair(a,b));
}
sort(v.begin(),v.end());
for(ll i=0;i<v.size();i++)
  {
    if(v[i].first<=c)
    {
      c=max(c,v[i].second);
    }
}
//cout<<k<<c;
if(c>=m){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
