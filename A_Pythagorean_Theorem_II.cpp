#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    fast
    ll n,c=0;
    cin>>n;
    for(ll i=1;i<n;i++){
        for(ll j=i+1;j<n;j++){
            ll x = i*i + j*j;
            ll y = sqrt(x);
            if(y*y==x && y<=n){
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
