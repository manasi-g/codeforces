#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll a[3];
    for(ll i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    ll c=a[1]-a[0]+a[2]-a[1];
    cout<<c;
return 0;
}
