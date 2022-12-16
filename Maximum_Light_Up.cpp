#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll p,a,b,c,x,y;
    cin>>p>>a>>b>>c>>x>>y;
    ll u=b*x;
    ll v=c*y;
    if(u<v){
        cout<<(p)/(x*a+b)<<endl;
    }
    else{
         cout<<(p)/(y*a+c)<<endl;
    }
}
return 0;
}
