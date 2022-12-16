#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,d;
    cin>>n;
    ll b=pow(10,n-1);
    ll c=pow(10,n);
    cout<<b<<" "<<c<<" ";

    for(ll i=b;i<=c;i++){
        if(i%3==0 && i%9!=0 && i%2!=0){
            d=i;
            break;
        }
    }
    cout<<d<<endl;
}
return 0;
}
