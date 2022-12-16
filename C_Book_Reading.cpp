#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,m,sum=0,sum1=0;
cin>>n>>m;
ll a[10];
ll k=n/m;
for(ll i=0;i<10;i++){
   a[i]=(m*(i+1))%10;
   sum+=a[i];
}
ll v=k%10;
ll u=k/10;
for(ll i=0;i<v;i++){
  sum1+=a[i];
}
cout<<u*sum+sum1<<endl;
}
return 0;
}
