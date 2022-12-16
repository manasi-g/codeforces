#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;

    ll n,q;
    cin>>n>>q;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){ 
        cin>>a[i];
        
    }
    sort(a,a+n,greater<int>());
    for(ll i=0;i<n;i++){ 
       
        if(i==0)    b[i]=a[i];
        else    b[i]=b[i-1]+a[i];
    }
    
     for(ll i=0;i<q;i++){
        ll x,y,s=0;
        cin>>x>>y;
        // 5 5 3 2 1
        // 5 8 9 14 16
        s=b[x-1]-b[x-y-1];
        if(x==y)    s=b[x-1];
       
        
        cout<<s<<endl;
        s=0;
    }
    

return 0;
}
