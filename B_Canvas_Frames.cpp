#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,c=0,t;
cin>>n;
ll a[n];

ll ma=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>ma){
        ma=a[i];
    }
    
}
t=max(ma,n);
ll b[t]={0};
for(ll i=0;i<n;i++){
   
    b[a[i]-1]++;
}
for(ll i=0;i<t;i++){
    if(b[i]>=2){
        c+=b[i]/2;
    }
}
cout<<c/2<<endl;

return 0;
}
