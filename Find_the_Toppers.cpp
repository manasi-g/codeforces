#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,u=0;
    cin>>n;
    string s;
    ll k;
     vector<pair<string,ll>> v;
    for(ll i=0;i<n;i++){
         cin>>s>>k;
        v.push_back(make_pair(s,k));
        if(k>u) i=k;
    }
    for(ll i=0;i<n;i++){
         if(v[i].second==u){
             cout<<v[i].first<<endl;
         }
    }


   
    
   
    
}

return 0;
}
