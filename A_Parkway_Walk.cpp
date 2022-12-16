#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m,s=0;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s<m) cout<<0<<endl;
    else cout<<s-m<<endl;
}
return 0;
}
