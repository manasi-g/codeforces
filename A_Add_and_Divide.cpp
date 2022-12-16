#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,c=0,count=0,ans=1e18;
cin>>a>>b;
for(ll i=0;i*i<=a;i++){
    if(b==1 && i==0 )
    continue;
    count=i;
    c=a;
    while(c){
        c=c/(b+i);
        count++;
    }
    ans=min(ans,count);
}
cout<<ans<<endl;
}
return 0;
}
