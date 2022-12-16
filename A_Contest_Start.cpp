#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int p;
cin>>p;
while(p--){
ll n,x,t,z=0;
cin>>n>>x>>t;
z=t/x;
ll p=((n-1)*n)/2;
if(z>n){
    cout<<p<<endl;
}
else{
    p=((z+1)*z)/2;
    cout<<n*z-p<<endl;
}

}
return 0;
}
