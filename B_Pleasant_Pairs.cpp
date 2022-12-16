#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    fast
    int t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        vector<ll> index(2*n+1,-1);
        for(ll i=1;i<=n;i++){
            ll a;
            cin>>a;
            index[a]=i;
        }
        for(ll sum=3;sum<2*n;sum++){
             for(ll i=1;i*i<=sum;i++){
                 if(sum%i==0 && i*i!=sum && index[i]!=-1 && index[sum/i]!=-1 && index[i]+index[sum/i]==sum){
                     c++;
                 }
             }
        }
    cout<<c<<endl;
    }
    return 0;
}