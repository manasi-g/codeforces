#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
freopen("input.txt", "rt", stdin);
freopen("output.txt", "wt", stdout);
ll n,m;
cin>>n>>m;
if(n==m){
    for(ll i=0;i<n;i++) cout<<"GB";
}
else if(n>m){
    for(ll i=0;i<m;i++) cout<<"BG";
    for(ll i=0;i<(n-m);i++) cout<<"B";
}
else if(n<m){
    for(ll i=0;i<n;i++) cout<<"GB";
    for(ll i=0;i<(m-n);i++) cout<<"G";
}


return 0;
}



