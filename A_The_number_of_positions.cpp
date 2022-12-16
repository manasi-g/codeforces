#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,a,b,c=0;
cin>>n>>a>>b;
for(ll i=0;i<n;i++){
    if(i+1>a && i+1>=n-b)    c++;
}
cout<<c;
return 0;
}
