#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,s=0,c=0,k;
cin>>n;
vector<ll>v;

for(ll i=0;i<n;i++){
    ll a;
    cin>>a;
    s+=a;
    v.push_back(a);
}

sort(v.begin(),v.end());
cin>>m;
for(ll i=0;i<m;i++){
    ll a,b;
    c=0;
    cin>>a>>b;
    k=lower_bound(v.begin(),v.end(),a)-v.begin();
    //cout<<s<<" "<<k<<" ";
    if(k==0){
       
        ll x=s-v[k];
        if(b>x){
            c+=b-x;
        }
    }
    else if(k!=n){
        ll u=0,w=0;
        ll x=s-v[k];
        ll y=s-v[k-1];
        if(a>v[k]){
            u+=a-v[k];
        }
        if(b>x){
            u+=b-x;
        }
        if(a>v[k-1]){
            w+=a-v[k-1];
        }
        if(b>y){
            w+=b-y;
        }
        c=min(u,w);
    }
    else if(k==n){
        ll x=s-v[k-1];
      
        if(a>v[k-1]){
            c+=a-v[k-1];
        }
         //cout<<v[k-1]<<" "<<c<<" ";
        if(b>x){
            c+=b-x;
        }
    }
    cout<<c<<endl;

}



return 0;
}
