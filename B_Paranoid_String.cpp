#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
long long int m=1000000007;
long long int countDerangements(int n) {
    
    vector<long long int> dp(n+1,-1);
    
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        long long int a=dp[i-1]%m;
        long long int b=dp[i-2]%m;
        long long int x=(a+b)%m;
        dp[i]=((i-1)*x)%m;
    }
    return dp[n];
}
int32_t main(){
fast
int n=4;
cout<<countDerangements(4);
return 0;
}