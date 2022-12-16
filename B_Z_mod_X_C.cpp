#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,b,c,x,y,z;
    cin>>a>>b>>c;
   // cout<<153%94<<" "<<94%541<<" "<<541%153<<endl;
//    y=b;
//    x=y+a;
//    z=x+c;
//    if(z%x!=c)    z+=c;
    z=c;
    
    y=z+b;
    x=y+a;
   cout<<x<<" "<<y<<" "<<z<<endl;
  // cout<<x%y<<" "<<y%z<<" "<<z%x<<endl;
}
return 0;
}
