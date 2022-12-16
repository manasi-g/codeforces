#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,sum=0,c=0,flag=0;
cin>>n;
ll a[n];
vector<ll>v;
for(ll i=0;i<n;i++){
    cin>>a[i];
    
    sum+=a[i];
}
for(ll i=0;i<n;i++){
    sum-=a[i];
    if((double)sum/(double)(n-1)==a[i] ){
        c++;
        v.push_back(i+1);
    }
    sum+=a[i];
}
cout<<c<<endl;
for(ll i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}
