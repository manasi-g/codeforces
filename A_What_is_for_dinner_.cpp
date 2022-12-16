#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,k,a,b,sum=0;
cin>>n>>m>>k;
ll u[1001]={1000001};
//for(ll i=0;i<1001;i++)  u[i]=1000001;

for(ll i=0;i<n;i++){
    cin>>a>>b;
    u[a-1]=min(u[a-1],b);
}
for(ll i=0;i<m;i++){
    sum+=u[i];
}
if(sum>k)   cout<<k<<endl;
else cout<<sum<<endl;
    
}

