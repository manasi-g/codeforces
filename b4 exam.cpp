#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll d,s,c=0,p=0;
cin>>d>>s;
vector <pair<ll,ll>> v;
for(ll i=0;i<d;i++){
    ll a,b;
    cin>>a>>b;
    c+=b;
    p+=a;
   v.push_back(make_pair(a,b));
}

if(c>=s && p<=s){
    cout<<"YES"<<endl;
    ll k=c-s;
    //cout<<k<<" ";
    for(ll i=0;i<d;i++){
        if(v[i].second>s && v[i].first<s)  { cout<<s<<" ";
        }
        else if(v[i].second>s && v[i].first>s){
            cout<<v[i].first<<endl;
            k+=v[i].first-s;
        }
        else if(k<v[i].first && s){
            cout<<v[i].first;
            k+=v[i].first-k;
        }
        else if(v[i].second>=k && k>=v[i].first)  { cout<<v[i].second-k<<" ";
        k=v[i].second-k;}
        else    cout<<v[i].second<<" ";
    }
}
else    cout<<"NO"<<endl;
return 0;
}
