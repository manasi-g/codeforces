#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,f=0,s1=0,s2=0;
cin>>n;
ll x[n],y[n];
for(ll i=0;i<n;i++){
    cin>>x[i]>>y[i];
    if(x[i]%2==0 && y[i]%2==1 || x[i]%2==1 && y[i]%2==0)   f=1;
    s1+=x[i];
    s2+=y[i];
   
}

if( s1%2!=0 && s2%2!=0 && f==1)  cout<<1;
else if(s1%2==0 && s2%2==0)    cout<<0;
else if(s1%2==0 && s2%2!=0 || s1%2!=0 && s2%2==0 )  cout<<-1;
else cout<<-1;

return 0;
}
