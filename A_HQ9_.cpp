#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s;
cin>>s;
ll c=0;
for(ll i=0;i,i<s.length();i++){
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9')    c++;
    if(c>1) break;
}
if(c==0)    cout<<"NO"<<endl;
else    cout<<"YES"<<endl;
return 0;
}
