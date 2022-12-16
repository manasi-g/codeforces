#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,flag=0,sum=0;
cin>>n;
for(ll i=1;i<=n;i++){
    sum+=i;
    if(sum==n){
        flag=1;
        break;
    }
}
if(flag==1) cout<<"YES"<<endl;
else    cout<<"NO"<<endl;
return 0;
}
