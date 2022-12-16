#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a[4];
    ll c=0;
    for(ll i=0;i<4;i++){ cin>>a[i];
    if(i!=0)  {
        if(a[i]>a[0] )  c++;
    }}
    cout<<c<<endl;

}
return 0;
}
