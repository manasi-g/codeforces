#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,c=0,b;
cin>>n;
 ll a[n];
 for(ll i=0;i<n;i++){
     cin>>a[i];
 }                              //4 4 2 1 1
 sort(a,a+n,greater<int>());
  for(ll i=0;i<n-1;i++){
      for(ll j=i+1;j<n;j++)
     { 
        b=__gcd(a[i],2*a[j]);
         if(b>1){
         c++;
     }
     }
 }
 cout<<c<<endl;
}
return 0;
}
