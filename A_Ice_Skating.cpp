#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,x,y,c=0;
cin>>n;
vector<pair<ll,ll>> v;
for(ll i=0;i<n;i++){
    cin>>x>>y;
    v.push_back(make_pair(x,y));

}
for(ll i=0;i<n-1;i++){
    
    if(v[i].second!=v[i+1].second && v[i].first!=v[i+1].first ) c++;
    //cout<<c<<" ";
}
cout<<c;
return 0;
}
