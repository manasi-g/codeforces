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
    int a,b;
    cin>>a>>b;
    int ans=0;
    if((a-1)%4==0)
    {
      ans=a-1;
    }
    if((a-1)%4==1)
    {
      ans=1;
    }
    if((a-1)%4==2)
    {
      ans=a;
    }
    ans=ans^b;
    if(ans==0)
    {
      cout<<a<<endl;
    }
    else if((ans)>a || (ans)<a)
    {
      cout<<a+1<<endl;
    }
    else
    {
      cout<<ans+2<<endl;
    }
  }
  return 0;
}
