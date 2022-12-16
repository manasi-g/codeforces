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
    int ans=0,r=0;
    if(s[0]<=s[1]  &&  s[1]>'a') r=-1;
    ans=(25*(s[0]-'a'))+(s[1]-'a'+1+r);
    cout<<ans<<endl;
    //25+25*25

}
return 0;
}
