#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,c,l,m,n;
cin>>a>>b>>c;
ll x=max(b,c);
ll y=max(a,c);
ll z=max(a,b);
if(a>x) l=0;
else    l=x-a+1;
if(b>y) m=0;
else    m=y-b+1;
if(c>z) n=0;
else    n=z-c+1;
cout<<l<<" "<<m<<" "<<n<<endl;
}
return 0;
}
