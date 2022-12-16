#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n;
    cin>>n;
    cout<<2*n-1<<endl;
    for(int i=2;i<=2*n-1;i++){
        cout<<1<<" "<<i<<endl;
    }
    for(int i=2*n-1;i>2;i--){
        cout<<2<<" "<<i<<endl;
    }
return 0;
}
