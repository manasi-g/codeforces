#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll x,y,k,a=0;
cin>>x>>y>>k;
ll c=y*k+k;
ll s=(c-1)/(x-1);
 if((k*y+k-1)%(x-1)!=0)
    {
      s++;
    }
   
cout<<s+k<<endl;
}
return 0;
}
