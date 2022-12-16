#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while (t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
      cin>>a[i];
    }
  
    ll ans=a[0];
    for(ll i=1;i<n;i++)
    {
      ans=a[i]&ans; //a[0]&a[4]   1011 
                                       // 0111 (3)
      
    }
    
    cout<<ans<<endl;
  }
return 0;
}
