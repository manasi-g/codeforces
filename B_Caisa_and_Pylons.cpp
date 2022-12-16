#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,sum=0,u=0;
cin>>n;
ll a[n+1];
a[0]=0;

for(ll i=1;i<n+1;i++){
    cin>>a[i];
    if(a[i]>u)  u=a[i];
}


cout<<u;
return 0;
}
