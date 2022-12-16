#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
ll prime[1000005];


int32_t main(){
fast
int t;
cin>>t;
for(ll i=2;i<=1000005;i++){
                    prime[i]++;
        for(ll j=i*2;j<=1000005;j+=i){
            prime[j]++;

        }
        }
while(t--){
    ll n;
    cin>>n;
    
    cout<<1+prime[n]<<endl;
}
return 0;
}
