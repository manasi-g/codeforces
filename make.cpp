#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,o=0,t=0,ans=0,s=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%3==1)   o++;
        else  if(a[i]%3==2)   t++;
        s+=a[i];
    }
    if(s%3!=0)  cout<<-1<<endl;
    else if(o==t)    cout<<o<<endl;
    else if(t>o){
         ans+=t-1;
         cout<<ans<<endl;
    }
    else if(o>t){
         ans+=t-1;
          cout<<ans<<endl;
    }

}
return 0;
}
