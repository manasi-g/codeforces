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
    ll m=INT_MAX;
    if(s.length()==2)   cout<<s[1]<<endl;
    else{
    for(int i=0;i<s.length();i++){
        if(s[i]-'0'<m)  m=s[i]-'0';
    }
    cout<<m<<endl;}
}
return 0;
}
