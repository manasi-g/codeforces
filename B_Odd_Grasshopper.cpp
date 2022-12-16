#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,n,s=0;
    cin>>a>>n;
    s=a;
    for(ll i=0;i<n;i++){
        if(s%2==1)  s+=i;
        else    s-=i;
    }
    cout<<s<<endl;
}
return 0;
}
