#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    if(k%n==0){
        cout<<1<<" "<<k/n<<endl;
    }
    else    cout<<0<<" "<<0<<endl;
}
return 0;
}
