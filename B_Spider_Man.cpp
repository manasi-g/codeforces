#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
  ll n,sum=0;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(ll i=0;i<n;i++)
  {
    sum=sum+a[i]-1;
    if(sum%2!=0)
    {
      cout<<1<<endl;
    }
    else
    {
      cout<<2<<endl;
    }
  }
return 0;
}
