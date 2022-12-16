#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    fast
    string s,t="bear";
    cin>>s;
    ll l=s.length(),c=0;   
    if(l<4){
        c=0;
    }
    else{
        vector<ll> v;
        v.push_back(0);
        for(ll i=0;i<l;i++){
            if(s.substr(i,4)==t){
                v.push_back(i+1);
            }
        }
        for(ll i=1;i<v.size();i++){
            ll x=v[i]-v[i-1];
            ll y=(l-v[i]-2);
            c+=x*y;        }
    }
    cout<<c;
    return 0;
}

