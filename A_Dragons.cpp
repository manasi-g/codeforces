#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll s,n,flag=0,x,y;
cin>>s>>n;
vector<pair<ll,ll>> v;

for(ll i=0;i<n;i++){
    cin>>x>>y;
    v.push_back(make_pair(x,y));
    
}
sort(v.begin(),v.end());
for(ll i=0;i<n;i++){
    if(s>v[i].first){
        
        s+=v[i].second;
    }
    else{
        flag=1;
        break;
    }
}
if(flag==1) cout<<"NO";
else{ cout<<"YES"<<endl;}
return 0;
}
