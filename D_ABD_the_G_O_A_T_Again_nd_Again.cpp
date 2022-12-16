#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll a[4],b[4];
    for(ll i  = 0;i<4;i++)cin>>a[i],b[i] = a[i];
    sort(b,b+4);
    if((a[0]==b[2] && a[1] == b[3]) || (a[0] == b[3] && a[1] == b[2])){
        cout<<"NO"<<endl;
        
    }
    else if((a[2]==b[2] && a[3] == b[3]) || (a[2] == b[3] && a[3] == b[2])){
         cout<<"NO"<<endl;
       
    }
    else cout<<"YES"<<endl;
    
}
return 0;
}
