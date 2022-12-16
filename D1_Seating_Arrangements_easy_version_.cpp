#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,m,c=0;
cin>>n>>m;
ll a[m];
for(ll i=0;i<m;i++){
    cin>>a[i];
}
for(ll i=1;i<m;i++){
    for(ll j=0;j<i;j++){
    if(a[i]>a[j]){
        c++;
    }
}
}
cout<<c<<endl;
}
return 0;
}
