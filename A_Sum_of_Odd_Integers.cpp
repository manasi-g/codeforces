#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
if(n%2!=k%2){
    cout<<"NO"<<endl;
}
else if(k*k>n){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}}
return 0;
}
