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
    string s,u="";
    cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='R' ) { u+="RL";
        i++;}
        else if(s[i]=='L' )  {u+="LR";
        i++;}
        else if(s[i]=='D')  u+='U';
        else if(s[i]=='U')  u+='D';

    }
    cout<<u<<endl;
}
return 0;
}
