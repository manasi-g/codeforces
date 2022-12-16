#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
ll a[n],b[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
ll c=a[n-1];
for(ll i=n-2;i>=0;i--){
    
    if(c>=a[i]){
        b[i]=c-a[i]+1;
    }
    else{
        b[i]=0;
        c=a[i];
    }

}
for(ll i=0;i<n-1;i++){
    cout<<b[i]<<" ";
}
cout<<0;
return 0;
}
