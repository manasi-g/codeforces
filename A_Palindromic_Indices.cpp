#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=n/2;i<n;i++){
        if(s[i]==s[n/2])    c++;
        else    break;
    }
    for(ll i=n/2-1;i>=0;i--){
        if(s[i]==s[n/2])    c++;
        else    break;
    }
    cout<<c<<endl;
}
return 0;
}
//aaaca