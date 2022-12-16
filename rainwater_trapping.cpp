#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,s=0;
cin>>n;
ll a[n],mxl[n],mxr[n],w[n];
for(ll i=0;i<n;i++) cin>>a[i];
for(ll i=0;i<n;i++) {
    if(i==0)    mxl[i]=a[0];
    else{
        mxl[i]=max(mxl[i-1],a[i]);
    }
}
for(ll i=n-1;i>=0;i--) {
    if(i==n-1)    mxr[i]=a[n-1];
    else{
        mxr[i]=max(mxr[i+1],a[i]);
    }
}
for(ll i=0;i<n;i++) {
    w[i]=min(mxl[i],mxr[i])-a[i];
    s+=w[i];
}
cout<<s<<endl;
return 0;
}
