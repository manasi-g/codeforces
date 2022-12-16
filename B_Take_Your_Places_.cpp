#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,e=0,o=0,c=0,u=0,v=0;
cin>>n;
ll a[n],h[n],r[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0)   e++;
    else    o++;
    a[i]=a[i]%2;
   h[i]=i%2;
   r[i]=(i+1)%2;
}
if(abs(o-e)>1)  cout<<-1<<endl;

else
{
    ll k=0,x=0,p=0,ans=INT_MAX;
    if(o>e) k=1;
    else if(o<e)    k=2;
    if(k==1 || k==0){
        for(ll i=0;i<o;i++){
        p+=abs(x-i);
        x+=2;
    }
    ans=min(ans,p);}
    if(k==2 || k==0){
        x=1;
        p=0;
        for(ll i=0;i<o;i++){
        p+=abs(x-i);
        x+=2;
    }
    ans=min(ans,p);
    }
    cout<<ans<<endl;
}

}}
