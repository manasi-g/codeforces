#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k,s=0,f=0,p=0,e=0,e1=0,p1=0;
    cin>>n>>k;
    //string g="";
    ll a[n];
    vector<int>x(n+1);
    x[0]=0;
    for(ll i=0;i<n;i++) {cin>>a[i];
    s+=a[i];
    x[i+1]=s;
    }
    if(s<k) cout<<-1<<endl;
    else{

     ll ans=0,u=0;

    for(int i=1;i<n+1;i++){
        f=upper_bound(x.begin(),x.end(), x[i-1]+k)-x.begin();
        ans=max(ans,f-i);
    }
        cout<<n-ans<<endl;
        }
        
  
            

}
return 0;
}
