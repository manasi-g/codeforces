#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,p,x,y,s=0;
    cin>>n>>p>>x>>y;
    ll a[n];
    for(ll i=0;i<n;i++){ cin>>a[i];}
    for(ll i=0;i<p;i++){
        if(a[i]==1) s+=y;
        else    s+=x;
    }
    cout<<s<<endl;
}
return 0;
}
