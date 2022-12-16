#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


int32_t main(){
fast
ll n;
ll mod=1e9+7;
cin>>n;
//3 
   ll t[n+1][7];
    for(ll i=0;i<=6;i++) {   t[i][0]=1;}
    for(ll j=1;j<=n;j++)    t[0][j]=0;
    ll a[6]={1,2,3,4,5,6};
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=6;j++){
            if(a[j-1]<=i){
                t[i][j]=(t[i-a[j-1]][j]%mod+ t[i][j-1]%mod);
            }
            else    t[i][j]=t[i][j-1];
        }
    }
    cout<< t[n][6];
}
