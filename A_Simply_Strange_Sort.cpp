#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,c=0,r=0;
cin>>n;
ll a[n],b[n];
for(ll i=0;i<n;i++) {cin>>a[i];
b[i]=a[i];}
sort(b,b+n);
for(ll i=0;i<n;i++) {
  if(b[i]==a[i]) r++;
}
//cout<<r<<" ";
if(r==n) c=0;

else

{while(1){
c++;
    if(c%2==1)
    {
      for(ll i=0;i<n-1;i=i+2){
      if(a[i]>a[i+1]){
        swap(a[i],a[i+1]);
         
      }
     
      
    }}
    else{
      for(ll i=1;i<n-1;i=i+2){
      if(a[i]>a[i+1]){
        swap(a[i],a[i+1]);
         
      }
       
    }}
    ll q=0;
for(ll i=0;i<n;i++) {
if(b[i]==a[i]) q++;}
if(q==n)  break;

}}
cout<<c<<endl;
}
}