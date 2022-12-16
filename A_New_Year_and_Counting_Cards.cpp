#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string s;
cin>>s;
int c=0;
for(ll i=0;i<s.length();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u')    c++;
    else if(s[i]>='0' && s[i]<='9'){
        int q=int(s[i]);
        if(q%2==1)  c++;
    }
}

cout<<c;
return 0;
}
