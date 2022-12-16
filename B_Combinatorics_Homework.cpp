#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,b,c,m,x=0,y=0,z=0,k;
    cin>>a>>b>>c>>m;
   if(a%2==1 && a!=1)  x++;
    if(b%2==1 && b!=1) y++;
    if(c%2==1 && c!=1) z++;
    x+=a/2;
    y+=b/2;
    z+=c/2;
    ll max1=x+y+z;
    ll min1;
    ll u=max(max(a,b),c);
    ll v=min(min(a,b),c);
   
        a=a-v; b-=v; c-=v;
        v=min(min(a,b),c);
        a=a-v; b-=v; c-=v;
        u=max(max(a,b),c);
        min1=u/2;
   //cout<<max1<<" "<<min1<<" ";
    if((m>=min1 && m<=max1 ) && min1!=max1)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl; 

}
return 0;
}
