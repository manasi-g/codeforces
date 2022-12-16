#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,ans=0;
cin>>n>>k;
ll a[n],b[n-1]={0};
for(ll i=0;i<n;i++) cin>>a[i];

while(k--){
    ll j=0;
    for(ll i=0;i<n;i++){
        j++;
         if(i==n-1 )  ans=-1;
         else if(a[i]>=a[i+1])  continue;
       
        else if(a[i]<a[i+1]){
            a[i]++;
            ans=i+1;
            break;
        }
       
    }
    if(j==n) break;
       

}
cout<<ans<<endl;
}
return 0;
}
