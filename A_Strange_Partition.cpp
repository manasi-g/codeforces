#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,x,min1=0,max1=0,s=0;
    cin>>n>>x;
    ll a[n];
    //cout<<ceil((double)11/(double)3)<<" ";
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        max1+=ceil((double)a[i]/(double)x);
    }
    min1=ceil((double)s/(double)x);
    
    cout<<min1<<" "<<max1<<endl;
    
}
return 0;
}
