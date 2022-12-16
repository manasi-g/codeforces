#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m,q,c=0,b=0,f=0;
    cin>>n>>m>>q;
    ll a[m];
    vector<ll>bread,cheese;

    for(ll i=0;i<m;i++) {
        cin>>a[i];
        if(a[i]%3==0)  { cheese.push_back(a[i]);
                       c+=a[i];}
        else   { bread.push_back(a[i]);
               b+=a[i];}
    }
    sort(bread.begin(),bread.end());
    sort(cheese.begin(),cheese.end());
    
    if(n>=bread.size() && q<=c){
        for(ll i=0;i<bread.size();i++) {
            if(bread[i]<cheese[i]){
                f=1;
                break;
            }
        }
        if(f==0)    cout<<"1"<<endl;
        else    cout<<0<<endl;
    }
     else    cout<<0<<endl;
}
return 0;
}
