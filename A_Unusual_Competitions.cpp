#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,c=0,ans=0,c1=0,c2=0,sum=0,f=0;
cin>>n;
string s;
cin>>s;
if(s.length()%2==1) cout<<-1<<endl;
else{
for(int i=0;i<s.length();i++){
    
    if(s[i]=='(')   c1++;
    else    c2++;

}

if(c1!=c2)  cout<<-1<<endl;
else{
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            sum++;
        else
            sum--;
        if(sum<0)   f=1;
        if(sum>0)   f=0;
        if(f==1) ans++;
    }
    cout<<ans<<endl;
}


}
return 0;
}
