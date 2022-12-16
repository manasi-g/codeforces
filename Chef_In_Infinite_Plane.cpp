#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,sum=0;
cin>>n;
ll a[n];
ll b=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>b){
        b=a[i];
    }
}
//cout<<b<<" "<<sum<<endl;
vector<ll> v(b+2,0);

for(ll i=0;i<n;i++){
    v[a[i]]++;
}

for(ll i=0;i<v.size();i++){
    if(v[i]<=i-1 && v[i]!=0)    sum+=v[i];
    else if(v[i]>i-1 && v[i]!=0)    sum+=i-1;
}

cout<<sum<<endl;

}

}
