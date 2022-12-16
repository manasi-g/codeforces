#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,x,f=0,s=0,a,b;
    cin>>n>>x;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(make_pair(a,1));
       
    }
  
        for(ll i=0;i<v.size();i++){
            if(v[i].first%x==0 && f!=1){
                v.push_back(make_pair(v[i].first/x,v[i].second*x));
            }
            else{
                f=1;
              
            }
             s+=v[i].first*v[i].second;
        }
    
    cout<<s<<endl;

}
return 0;
}
