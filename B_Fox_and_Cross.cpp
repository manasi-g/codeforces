#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
char s[n][n];
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        cin>>s[i][j];
    }
}
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        cout<<s[i][j];
    }
    cout<<endl;
}
return 0;
}
