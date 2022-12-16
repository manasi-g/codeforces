#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll a1,a2,a,b,m=0,x,y,u,v;
cin>>a1>>a2;
a=min(a1,a2);
b=max(a1,a2);
while(a>0 && b>0){
    if(a!=1 || b!=1)    m++;
    //if(a==1 && b==2) break;
    u=a+1;
    v=b-2;
    x=u;
    y=v;
    //cout<<u<<" "<<v<<endl;
    a=min(x,y);
    b=max(x,y);
    
   
   
}
cout<<m;
return 0;
}
