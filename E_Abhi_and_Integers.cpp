#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll a,b,c=0;
    cin>>a>>b;
    ll m=max(a,b);
    ll n=min(a,b);
    for(ll i=1;i<=n;i++){
        c+=(m+(i%5))/5;
    }
    cout<<c;

return 0;
}
