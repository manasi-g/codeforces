#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll a,b,c,d;
cin>>a>>b>>c;
d=a*c;
ll e=(a*c)%b;

    if((a*c)%b!=0)
    {ll f=(d/b)-c+1;
    cout<<f<<endl;}
    else{
        ll f=(d/b)-c;
    cout<<f<<endl;
    }

return 0;
}
