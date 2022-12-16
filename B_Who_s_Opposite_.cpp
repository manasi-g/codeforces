#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,c,d;
cin>>a>>b>>c;
d=abs(a-b)*2;
ll e=abs(a-b);
if(a>d || b>d || c>d){
    cout<<-1<<endl;
}
else{
    if(c<=e)  cout<<e+c<<endl;
    else cout<<c-e<<endl;
}
}
return 0;
}
