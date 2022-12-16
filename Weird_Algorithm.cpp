#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2) n=n*3+1;
        else    n/=2;
        cout<<n<<" ";
    }
return 0;
}
