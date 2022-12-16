#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,h,c=0,m=0;
    cin>>n>>h;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        a.push_back(k);
        if(k>=h)    c=1; 
        if(k>m) m=k;
    }
   sort(a.begin(), a.end(), greater<int>());
  
    ll m1 = a[0],m2 = a[1];
    ll ans = 0;
    ll u = m1 + m2;

    ans = h/u;
    ans=ans*2;
    if((h%u) > m1)ans+=2;
    else if(h%u)ans++;
     if(h<=m1)  cout<<1<<endl;
    else cout<<ans<<endl;
    

}
return 0;
}

