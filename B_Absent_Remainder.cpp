#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,v,c=0;
    cin>>n;
    vector <ll>a(n),b(n-1);
    vector<pair<ll,ll>>p;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>::iterator q;
    sort(a.begin(),a.end());
    for(ll i=1;i<=n/2;i++){
       cout<<a[i]<<" "<<a[0]<<endl;
    }
    

}
return 0;
}
