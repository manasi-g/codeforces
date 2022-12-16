#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,x,y,sum=0,p=0,sum1=0;
cin>>n;
ll a[n];

for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    
}
cin>>x>>y;
//cout<<sum<<" "<<sum-y<<" ";
for(ll i=0;i<n;i++){
    sum1+=a[i];
    sum-=a[i];
    if(sum>=x && sum<=y && sum1>=x && sum1<=y){
        p=i+2;
        break;
    }
}
cout<<p;

return 0;
}
