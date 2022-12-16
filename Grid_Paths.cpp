#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll dp[1001][1001];
ll n;
ll m=1e9+7;
int32_t main(){
fast
cin>>n;

string s;
dp[0][0]=1;
for(ll i=0;i<n;i++){
    cin>>s;
    for(ll j=0;j<n;j++) {
        if(s[j]=='*'){
            dp[i][j]=0;
            continue;
        }
        if(i>=1)    dp[i][j]=(dp[i-1][j])%m;
        if(j>=1)    dp[i][j]=(dp[i][j]+dp[i][j-1])%m;
    }
}
cout<<dp[n-1][n-1];
return 0;
}
