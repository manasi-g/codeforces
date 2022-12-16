#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,c=0,m=1e+7,u,r,v,p=1e+7,x,q=1e+7,y;
cin>>n>>k;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=p){
        p=a[i];
        x=i;
    }
}
ll ans=n*(n-1)-k*(a[n-1]|a[n-2]);
a[x]=n+1;
x++;
for(ll i=0;i<n;i++){
    if(a[i]<=q){
        q=a[i];
        y=i;
    }
}
y++;
ll ans2=x*y-k*(p|q);

cout<<max(ans,ans2)<<endl;
}
return 0;
}

