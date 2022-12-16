#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n;
    cin>>n;
    ll c=n-n/2-n/3-n/5-n/7+n/6+n/10+n/14+n/15+n/21+n/35-n/30-n/105-n/70-n/42+n/210;
    cout<<c;
return 0;
}
