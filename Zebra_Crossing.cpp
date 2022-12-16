#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,k,c=0;
cin>>n>>k;
string s;
cin>>s;
char a=s[0];
for(ll i=0;i<n;i++){
    if(a!=s[i]){
        c++;
        a=s[i];
    }
}
if(c<k) cout<<-1<<endl;
else if(s[0]=='0'){
    if(k%2==1){
        for(ll i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
         for(ll i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
else{
    if(k%2==1){
        for(ll i=s.length()-1;i>=0;i--){
            if(s[i]=='0'){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
         for(ll i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
}
return 0;
}
