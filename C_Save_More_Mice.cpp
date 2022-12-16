#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int rem(ll c,ll u,ll k){
    ll d=1e7,m,f=0;
    for(ll i=0;i<c;i++){
         c++;
       if(u==pow(k,i)){
           u=0;

           break;
           
       }
       m=u-pow(k,i);
       if(m<d)  d=m;
      
   }
   u=d;
   if(u==0) return c;
   else return 0;
}
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,d=1e7,m,f=0,c=0,e=0;
    cin>>n>>k;
    while(f!=1){ 
        if(pow(k,c)>n)  {
            f=1;
            break;
        }
        c++;
    }
   c--;
   e++;
   ll u=n-pow(k,c);
  ll j= rem(c,u,k);
  while(j==0)  rem(c,u,k); 
  if(j!=0)  cout<<j<<endl;
  //else  rem(c,u,k);
   

}
return 0;
}
