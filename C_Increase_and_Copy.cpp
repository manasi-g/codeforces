#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main()
{
  fast int t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin>>n;
    ll s=0;
    ll x=ceil(double(sqrt(n)));
    //cout<<x<<" ";
    ll ans=x+n/x-1;
    if(n%x==0)
    {
      ans=ans-1;
    }
    cout<<ans<<endl;
  }
  return 0;
}
