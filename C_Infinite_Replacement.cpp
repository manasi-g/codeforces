#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
ll f=0,c=0,c1=1;
    for(ll j=0;j<b.length();j++){
        if(b[j]=='a') {f=1;
        c++; }
    }
    for(ll j=0;j<a.length();j++){
        if(a[j]=='a') {
        c1*=2; }
    }
     if(c==b.length() && c==1)   cout<<1<<endl;
    else if(f!=1)    cout<<c1<<endl;
       
else{
    if(f==1)    cout<<-1<<endl;
}
    


}

return 0;
}
