#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m;
cin>>n;
string a="ROYGBIV";
ll k=n/7;
ll u=n%7;
for(ll i=0;i<k;i++) cout<<a;
if(u>=4){
    for(ll i=0;i<u;i++){ 
if(i>6){
    m=i%6;
    cout<<a[m];
}
else{
cout<<a[i];
}}
}
else
{for(ll i=3;i<u+3;i++){ 
if(i>6){
    m=i%6;
    cout<<a[m];
}
else{
cout<<a[i];
}}}
return 0;
}
