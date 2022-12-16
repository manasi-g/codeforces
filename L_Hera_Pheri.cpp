#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll a[1005];
int32_t main(){
    ll n,m,q,l,r;
    string s,t;
    cin>>n>>m>>q>>s>>t;
    for(ll i=0;i<=n-m;i++) a[i+1]=a[i]+(s.substr(i,m)==t);
    while(q--){
        cin>>l>>r;
        if(r-l+1<m) cout<<0<<endl;
        else cout<<a[r-m+1]-a[l-1]<<endl;
    }
return 0;
}
