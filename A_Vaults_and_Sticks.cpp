#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n,m,e1=0,o1=0,e2=0,o2=0;
    cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++) {cin>>a[i];
    if(a[i]%2==0)   e1++;
    else o1++;
    }
    for(ll i=0;i<m;i++)  {cin>>b[i];
    if(b[i]%2==0)   e2++;
    else o2++;
    }
    ll h=min(e1,o2);
    h+=min(e2,o1);
    cout<<h<<endl;  
return 0;
}
