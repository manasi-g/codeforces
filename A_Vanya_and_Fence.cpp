#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,h,c=0;
cin>>n>>h;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>h)  c+=2;
    else
    {
        c++;
    }
}
cout<<c<<endl;
return 0;
}
