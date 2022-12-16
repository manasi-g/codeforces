#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k,c=0,a,b;
cin>>n>>k;
vector<pair<ll,ll>>v;
for(ll i=0;i<n;i++){
    cin>>a>>b;
    v.push_back(make_pair(-a,b));
}
sort(v.begin(), v.end());
ll u=v[k-1].first;
ll p=v[k-1].second;
for(ll i=0;i<n;i++){
    if(v[i].first==u && v[i].second==p){
        c++;
    }
}
cout<<c;
return 0;
}
