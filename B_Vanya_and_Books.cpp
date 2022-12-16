#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n;
    cin>>n;
    string s=to_string(n);
    ll d=0;
    ll l=s.length();
    
    while(l!=0){
        ll a=pow(10,l-1);
        ll b=n-a+1;
        d+=l*b;
        l--;
        n=n-b;
    }
    cout<<d;
}
