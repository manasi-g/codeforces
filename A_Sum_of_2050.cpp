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
    if(n%2050!=0 || n<2050)
    {
      cout<<-1<<endl;
    }
    else
    {
      n=n/2050;
      ll c=0;
      while(n>0)
      {
        c=c+n%10;
        n=n/10;
      }
      cout<<c<<endl;
    }
  }
  return 0;
}
