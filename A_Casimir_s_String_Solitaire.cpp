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
    for(ll i=0;i<s.length();i++){
        if(s[i]=='A')   a++;
        else if(s[i]=='B')   b++;
        else    c++;
    }
    //cout<<a<<" "<<b<<" "<<c<<" ";
    if(a==(b-c) && (b-a)==c)    cout<<"YES"<<endl;
    else if(a==0 && (b)==c)    cout<<"YES"<<endl;
    else if(c==0 && (b)==a)    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}
