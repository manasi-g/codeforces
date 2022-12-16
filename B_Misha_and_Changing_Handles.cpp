#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main()
{
  fast int t;
  cin >> t;
  map<string,string> m;
  map<string,string>::iterator it;
  while (t--)
  {
    string s,s1;
    cin>>s>>s1;
    pair<string,string> p=make_pair(s1,s);
    it=m.find(s);
    if(it!=m.end())
    {
      p.second=it->second;
      m.erase(it);
    }
    m.insert(p);
  }
  cout<<m.size()<<endl;
  for(it=m.begin();it!=m.end();it++)
  {
    cout<<it->second.c_str()<<" "<<it->first.c_str()<<endl;
  }
  return 0;
}
