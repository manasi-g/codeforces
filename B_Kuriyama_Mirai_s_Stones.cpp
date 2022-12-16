#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
ll a[n],b[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(b,b+n);
for(ll i=1;i<n;i++){
    a[i]=a[i]+a[i-1];
    b[i]=b[i]+b[i-1];
}

ll m;
cin>>m;
while(m--){
    ll t,l,r,s=0;
    cin>>t>>l>>r;
    if(t==1){
        if(l==1)    cout<<a[r-1]<<endl;
        else cout<<a[r-1]-a[l-2]<<endl;
    }
    else{
        if(l==1)    cout<<b[r-1]<<endl;
        else cout<<b[r-1]-b[l-2]<<endl;
    }
   
}
return 0;
}
