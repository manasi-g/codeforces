#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n;
    cin>>n;
    if(n%4==0){
        cout<<"1 A";
    }
    else if(n%4==1) cout<<"0 A";
    else if(n%4==2) cout<<"1 B";
    else if(n%4==3) cout<<"2 A";
    //cout<<n%4;
return 0;
}
