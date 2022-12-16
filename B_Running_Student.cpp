#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
double vb,vs,t1,t2,k,t,m=0;
cin>>n>>vb>>vs;
ll x,y;
ll a[n];
double u=1e17;
for(ll i=0;i<n;i++){
    cin>>a[i];
   
}
cin>>x>>y;
for(ll i=1;i<n;i++){
    t1=(double)a[i]/(double)vb;
    k=((a[i]-x)*(a[i]-x)+y*y);
    t2=(double)sqrt(k)/(double)vs;
    t=t1+t2;
   // cout<<t1<<" ";
    if(u>=t ){
        u=t;
        m=i+1;
    }
}
double r=2.2,b=2.0;
cout<<m<<endl;

return 0;
}
