#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,min;
cin>>n;         
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];
if(n==2){
    min=abs(a[0]-a[1]);
}
else{sort(a,a+n,greater<int>());
  min=abs(a[n-1]-a[0]);
for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++){
        if((a[i]-a[j])<min){
            min=a[i]-a[j];
        }
}
}}
cout<<min<<endl;
}
return 0;
}
