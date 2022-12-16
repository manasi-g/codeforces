#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n%10==9) cout<<n/10+1<<endl;
    else    cout<<n/10<<endl;
}
return 0;
}
 ll a[4],b[4];
    for(ll i  = 0;i<4;i++)cin>>a[i],b[i] = a[i];
    sort(b,b+4);
    if((a[0]==b[2] && a[1] == b[3]) || (a[0] == b[3] && a[1] == b[2])){
        print("NO");
        return;
    }
    if((a[2]==b[2] && a[3] == b[3]) || (a[2] == b[3] && a[3] == b[2])){
        print("NO");
        return;
    }
    print("YES");
 