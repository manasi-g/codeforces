#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a,b,s=0;
    cin>>a>>b;
    if(a==0)    s=1;
    else    s+=a+b*2+1;
    cout<<s<<endl;
}
return 0;
}
