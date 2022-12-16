#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll k=s/n;
    if(a>=k && (s-n*k)<=b)  cout<<"YES"<<endl;
    else if(a<k){
        if(s-a*n<=b)    cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
    
    else    cout<<"NO"<<endl;
}
return 0;
}
