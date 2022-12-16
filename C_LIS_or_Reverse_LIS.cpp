#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c=0,b=0,k=0,ans=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=1;i<n;i++){
        if(a[i]==a[i-1])    k++;
        else{
            b=max(b,k);
            k=0;
        }
    }
    if(b>=n/2)   ans=n-b;
    else    ans=n/2;
   if(ans==0)   ans=1;
    cout<<ans<<endl;
}
return 0;
}
