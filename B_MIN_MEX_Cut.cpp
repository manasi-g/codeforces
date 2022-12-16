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
ll a=0,b=0,c=0;
for(ll i=0;i<s.length();i++) {
    if(s[i]=='0' )   a++;
}
for(ll i=0;i<s.length()-1;i++) {
    if(s[i]=='0' && s[i+1]=='0')   b++;
}

if((a-b)>2) cout<<2<<endl;
else cout<<(a-b)<<endl;
}
return 0;
}
//101 ()
