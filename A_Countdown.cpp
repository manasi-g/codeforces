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
string s;
cin>>n>>s;
if(s[n-1]!='0') c+=s[n-1]-'0';
for(ll i=0;i<n-1;i++){
    if(s[i]!='0'){
        c+=(s[i]-'0')+1;
    }
}
cout<<c<<endl;
}
return 0;
}
