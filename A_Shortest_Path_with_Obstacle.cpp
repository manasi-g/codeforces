#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a1,a2,b1,b2,f1,f2,c,d,e,f,g,h;
cin>>a1>>a2>>b1>>b2>>f1>>f2;
if(a1==b1){
    c=abs(a2-b2);
      d=max(a2,b2);
     e=min(a2,b2);
    for(ll i=e;i<d;i++)
   { if(f2==i && f1==a1){
        c=c+2;
    }}

}
else if(a2==b2){
      c=abs(a1-b1);
      d=max(a1,b1);
      e=min(a1,b1);
    for(ll i=e;i<d;i++)
   { if(f1==i && f2==a2){
        c=c+2;
    }
    else
    {
        c+=0;
    }}
}
else{
ll k=abs(a1-b1);
f=abs(a2-b2);
    c=k+f;
}
cout<<c<<endl;
c=0;
}
return 0;
}
