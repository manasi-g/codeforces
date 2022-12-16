#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    ll n,m;
    cin>>n>>m;
    ll a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
        
    }
    ll c=a[0]-1;
     for(int i=1;i<m;i++){
        
        if(a[i-1]>a[i]) {
            c+=abs(n-a[i-1]);
            c+=a[i];
            }
        else   {
             c+=abs(a[i]-a[i-1]);
             }
    }
    
    cout<<c;


}