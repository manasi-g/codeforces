#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll dp[1000005];
ll x;
int32_t main(){
fast
    
    cin>>x;
    dp[0]=0;
    for(ll i=1;i<=x;i++){
        set<ll>s;
        ll a=i;
        while(a!=0){
            s.insert(a%10);
            a/=10;
        }
        dp[i]=INT_MAX;
        for(auto j: s){
            dp[i]=min(dp[i],dp[i-j]+1);
        }
    }
    cout<<dp[x];
return 0;
}
