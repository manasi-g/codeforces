#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int div(ll n){
   ll k=n;
  while(k!=0)
  {
    if(k%10!=0 && n%(k%10)!=0)
    {
      return 0;
    }
    k=k/10;
  }
  return 1;
 
}

int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,c=0,u=0,r=0,f=0;
    cin>>n;
  
    //cout<<s.size()<<endl;
    while(div(n)!=1){
        n++;
    }
    cout<<n<<endl;

}
return 0;
}
