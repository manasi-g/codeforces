#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,c=1,d=0;
cin>>n>>k;
vector<pair<ll,ll>>v;
for(ll i=0;i<n;i++){
    cin>>d;
    v.push_back(make_pair(d,i));
}
sort(v.begin(),v.end());
for(ll i=0;i<n-1;i++){
    if(v[i+1].second-v[i].second!=1){
        c++;
    }
}
//cout<<c<<" ";
if(c<=k)    cout<<"Yes"<<endl;
else    cout<<"No"<<endl;
}
return 0;
}