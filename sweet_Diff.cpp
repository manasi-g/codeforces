#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll m,x;
    cin>>m>>x;
    if(x>m){
        ll b=x-m;
        cout<<abs(b-m)<<endl;
    }
    else cout<<x<<endl;
}
return 0;
}
