#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,c;
    cin>>n>>k;
    c=k;
    ll a[n],b[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    vector<pair<ll,ll>>m;
    for(ll i=0;i<n;i++) m.push_back(make_pair(a[i],b[i]));
    sort(m.begin(),m.end());
    for(auto mp: m){
        if(c>=mp.first)   c+=mp.second;
        else break;
    }
    cout<<c<<endl;


}
return 0;
}
