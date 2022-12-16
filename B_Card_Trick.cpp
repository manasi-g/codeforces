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
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++) {
        int k;
        cin>>k;
        a.push_back(k);
    }
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++)   { cin>>b[i]; c+=b[i];}
    c%=n;
    
    rotate(a.begin(), a.begin()+c, a.end());
    cout<<a[0]<<endl;
}
return 0;
}
