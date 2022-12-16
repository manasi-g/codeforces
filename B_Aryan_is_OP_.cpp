#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,b,n;
    cin>>a>>b>>n;
    cout<<(n-b)/a*a+b<<endl;
}
return 0;
}
