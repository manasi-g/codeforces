#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,x,c=0;
    cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll p=x;
    if(a[0]<=x) c++;
    p-=a[0];
    ll high=n, low=0;
    while(high>=low){
        ll mid=high-(high-low)/2;
        if(a[mid]==p)   
    }
    while(a[0]<=x){
        ll p=x;
        for(ll i=0;i<n;i++){
            if(a[i]<=p) {
                c++;
                p-=a[i];
            }
            a[i]++;
        }
    }
    cout<<c<<endl;
}
return 0;
}
