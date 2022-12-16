#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,t,m,flag=0;
cin>>n>>t;
ll a[n-1];
for(ll i=0;i<n-1;i++)    cin>>a[i];
m=0;    
for(ll i=0;i<n-1;i=m)    {
m+=a[i];
if(m==t-1){
    flag=1;
    break;
}
}
if(flag==1) cout<<"YES";
else
{
    cout<<"NO";
}

return 0;
}
