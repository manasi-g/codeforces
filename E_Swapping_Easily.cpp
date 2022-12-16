#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n,f=0;
    cin>>n;
    ll a[n];
    map<ll, ll> b;
  
    for(ll i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for(auto i:b) {
        if(i.second>(n+1)/2)
        {
           f=1;
           break;
        }
    }
    if(f==1)    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

     

return 0;
}
