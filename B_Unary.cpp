#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s;
cin>>s;
ll a=0,b=1000003;
/* '>'  →  1000,
'<'  →  1001,
'+'  →  1010,
'-'  →  1011,
'.'  →  1100,
','  →  1101,
'['  →  1110,
']'  →  1111 */
for(ll i=0;i<s.length();i++){
    a=a*16;
    if(s[i]=='>')   a+=8;
    else if(s[i]=='<')   a+=9;
    else if(s[i]=='+')   a+=10;
    else if(s[i]=='-')   a+=11;
    else if(s[i]=='.')   a+=12;
    else if(s[i]==',')   a+=13;
    else if(s[i]=='[')   a+=14;
    else if(s[i]==']')   a+=15;
    a=a%b;
}
cout<<a%b<<endl;
return 0;
}
