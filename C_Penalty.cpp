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
ll m=0,n=0,k=0,l=0;
ll h=count(s.begin(),s.end(),'1');
ll g=count(s.begin(),s.end(),'0');
ll f=count(s.begin(),s.end(),'?');
if(h==10 || g==10)  cout<<10<<endl;
//else if(f==0 && (h==1 || g==9))  cout<<10<<endl;
else
{for(ll i=0;i<s.length();i++){
    if(i%2==0){
        if(s[i]=='1'){
            n++;
        }
        else if(s[i]=='?')  k++;
    }
    else{
        if(s[i]=='1'){
            m++;
        }
        else if(s[i]=='?')  l++;
    }
}
if(n>m){
    if(m+l>n){
        cout<<m+l<<endl;
    }
    else{
        cout<<n<<endl;
    }
}
else {
   cout<<0<<endl;   //101010
}
}

}
return 0;
}
