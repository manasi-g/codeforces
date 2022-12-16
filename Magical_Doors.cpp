#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll c=0;
    if(s[0]=='0')   c++;
    for(ll i=0;i<s.length()-1;i++){
        if(s[i]!=s[i+1])    c++;    
    }
    cout<<c<<endl;
}
return 0;
}
