#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,x,c=0;
    cin>>n>>x;
    ll a[n],b[n]={0};
    ll u=x/2;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        if(a[i]==u && x%2==0){
                c++;
                if(c%2==0)  b[i]=1;
               continue;
            }
        for(ll j=i+1;j<n;j++){
            
            if(a[i]+a[j]==x){
               b[i]=1;
               break;
            }
    }
    }
    for(ll i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
return 0;
}
