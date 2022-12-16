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
    string s;
    cin>>s;
    string k=s;
    ll l=s.length();
    sort(k.begin(),k.end());
    cout<<k[0]<<" ";
    ll c=0;
    for(ll i=0;i<s.size();i++)
    {
      if(s[i]==k[0] && c==0)
      {
        c=1;
        continue;
      }
      cout<<s[i];
    }
    cout<<endl;
  }
  return 0;
}
