#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll a,b;
cin>>a>>b;
ll c=__gcd(a,b);
cout<<(a*b)/c;
return 0;
}
