#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    ll n,a,b,c,t,u=0;
    cin>>n>>a>>b>>c>>t;
    ll v[n];
    for(ll i=0;i<n;i++) cin>>v[i];
    if(b>=c)    u=n*a;
    else{
        for(ll i=0;i<n;i++){
             u+=a+(c-b)*(t-v[i]);
        }
    }
    cout<<u;


return 0;
}
