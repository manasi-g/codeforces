#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    //1 1 2 2 5 6   
    //1 2 1 6 2 5
    // 1 9 4 8
    // 1 2 3    1 3 2
     map<ll ,ll> m;
    ll n,f=0,mini=INT_MAX,maxi=INT_MIN;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    if(n%2) f=1;
  
     for(ll i = 0;i < n;i++)
        m[a[i]]++,mini = min(a[i],mini),maxi = max(maxi,a[i]);
    for(auto i : m){
        if(i.second > n/2){
            f=1;
        }
        if(i.second == n/2 && (i.first != mini && i.first != maxi)){
            f=1;
        }
    }
    if(f)   cout<<"NO";
    else{
    cout<<"YES"<<endl;
    for(ll i=0;i<n/2;i++){
       
        cout<<a[i]<<" "<<a[i+n/2]<<" ";
    }}
       

    cout<<endl;
}
return 0;
}
// 0 0 0 1 1 2 3 3