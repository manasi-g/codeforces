#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll t;
cin>>t;
ll x,a,sum=0,p=0,n=0;
vector<pair<ll,ll>> v;
for(ll i=0;i<t;i++){
    cin>>x>>a;
    v.push_back(make_pair(x,a));
    sum+=v[i].second;
    if(v[i].first>0)    p++;
    else    n++;
}
sort(v.begin(),v.end());

if(n==p )    cout<<sum<<endl;
else if(p>n){
    sum=0;
    for(ll i=0;i<2*n+1;i++){
        sum+=v[i].second;
    }
    cout<<sum<<endl;
}

else{   
    sum=0;
    for(ll i=t-2*p-1;i<t;i++){   //t-(p+1)-1
        sum+=v[i].second;
    }
    cout<<sum<<endl;
}



return 0;
}
