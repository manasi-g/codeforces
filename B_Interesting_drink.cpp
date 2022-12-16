#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,k;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];
cin>>m;
ll b[m];
sort(a,a+n);
for(ll i=0;i<m;i++)
    {
        cin>>b[i];
      ll ans=upper_bound(a,a+n, b[i])-a;
        
        cout<<ans<<endl;
    }
return 0;
}
