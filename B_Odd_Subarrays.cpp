#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll c=0,n,ans=0,f=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll i=1;
    while(i<n){
        if(a[i-1]>a[i]) {
            ans++;
            
            i++;
        }
        i++;
    }
    cout<<ans<<endl;
}
return 0;
}
