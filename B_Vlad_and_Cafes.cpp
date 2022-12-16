#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m=0,k=0,j=0;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>m)  m=a[i];
}
ll b[m+1]={0};
while(k!=n-1){
for(ll i=m-1;i>=0;i--){
    b[a[i]]++;
    if(b[j]==1) k++;
    j++;
}}
for(ll i=0;i<m;i++){
    if(b[i]==0) cout<<i<<endl;
}
}
