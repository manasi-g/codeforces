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
    vector<ll>a;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++) {
        ll j;
        cin>>j;
        a.push_back(j);
    }
       //for(ll i=0;i<n;i++) cout<<a[i];

    for(ll i=0;i<n;i++){
        ll m=max_element(a.begin(),a.end())-a.begin();
       if(m!=n-i-1 ){
           v.push_back(make_pair(m+1,n-i));
       }
       a.erase(a.begin()+m);
    }
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<1<<endl;
    }
   
}
return 0;
}
