#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
ll b=-1,s;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>b){
        b=a[i];
    }
}
vector<ll> v(b+2,0);

for(ll i=0;i<n;i++){
    v[a[i]]++;
}


ll u=*max_element(v.begin(), v.end());
ll r=a[u];
for(ll i=0;i<n;i++){
    a[i]=a[i]^r;
}
for(ll i=0;i<n-1;i++){
    s=a[i]|a[i+1];
}
cout<<r<<" "<<s;

}
return 0;
}
