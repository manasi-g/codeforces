#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,f=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        ll u=sqrt(a[i]);
        if(u*u==a[i]){
            f++;
        }   
    }
    if(f!=n)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}
return 0;
}
