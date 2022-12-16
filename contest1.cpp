#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,c=0,k,sum=0;
cin>>n>>k;
ll a[n],l[n]={0};
for(ll i=0;i<n;i++){
    cin>>a[i];
    
    l[a[i]-1]++;
}
// for(ll i=0;i<n;i++){
//     cout<<l[i]<<" ";
// }
// cout<<endl;
for(ll i=0;i<n;i++){
   if(l[i]>=1) sum+=l[i];
    if(l[i]>=k) {c++;
    sum-=l[i]; }
}
//cout<<sum<<" ";

ll u=sum%k;
ll v=sum/k;
c+=v;
if(u!=0)    c++;
cout<<c<<endl;
}
return 0;
}
