#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,s=0,f=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    for(ll i=0;i<n;i++){
        s-=a[i];
        if((s%(n-1))==0){
            if((s/(n-1))==a[i])   {
                f=1;
                break;
            }
        }
        s+=a[i];
    }
    if(f)   cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}
return 0;
}
