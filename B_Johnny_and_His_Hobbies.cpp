#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,u,c=0,flag=0,v=-1;
cin>>n;
ll a[n];
set<ll>s;

for(ll i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
for(ll i=1;i<1025;i++){
    set<ll>s1;
    for(ll j=0;j<n;j++){
        s1.insert(a[j]^i);

    }
    if(s==s1){
        v=i;
        break;
    }
}
cout<<v<<endl;
}}

        