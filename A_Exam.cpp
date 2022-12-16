#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k;
cin>>n;
if(n==1||n==2)    cout<<1<<endl<<1;
else if(n==3)   cout<<2<<endl<<"1 3"<<endl;
else{
    cout<<n<<endl;
    for(ll i=n;i>=1;i--)
    {
      if(i%2!=0)
      {
        cout<<i<<" ";
      }
    }
    for(ll i=n;i>=1;i--)
    {
      if(i%2==0)
      {
        cout<<i<<" ";
      }
    }
}
return 0;
}
