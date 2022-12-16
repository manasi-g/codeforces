#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,f=0;
cin>>n;
for(ll i=1;i<cbrt(n);i++){
    ll a=i*i*i;
    ll b=n-a;
   ll c=cbrt(b);
    if(c*c*c==b){
        f=1;
        break;
    }
}
if(f==1)    cout<<"YES"<<endl;
else    cout<<"NO"<<endl;
}
return 0;
}
