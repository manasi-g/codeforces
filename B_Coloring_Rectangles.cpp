#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m,c=0;
    cin>>n>>m;
    if(n==1 || m==1)    cout<<1<<endl;
    
    else{
        if(n%2==0){
            c+=n/2*m;
        }
        else if(m%2==0){
            c+=m/2*n;
        }
        if(n%2==1 && m%2==1){
            ll a=max(n,m);
            ll b=min(m,n);
            c+=(a/2)*b;
        }
        cout<<c<<endl;
    }
    
}
return 0;
}
