#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,s=0,o=0,z=0,c=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1) o++;
        else  if(a[i]==0) z++;
    }
    if(o==0)    c=0;
    else    c=pow(2,z)*o;
    cout<<c<<endl;

}
return 0;
}
