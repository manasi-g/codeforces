#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,x,c;
cin>>n>>k;
vector<ll> v;
set<ll>s;
for(ll i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
    s.insert(x);
}
while(k--){
ll u=*max_element(s.begin(),s.end());
for(ll i=0;i<u;i++){
    if(i!=s[i]){
        c=i;
        break;
    }
}

}
}
return 0;
}
