#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,m=0,c=0,ans=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    
}
for(ll i=0;i<n-1;i++){
    c=a[i]*a[i+1];
    if(c>m){
        m=c;
    }
    
}
cout<<m<<endl;
}
return 0;
}
