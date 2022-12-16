#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll b[n+1];
b[0]=(int(s[0])-97)+1;
for(ll i=1;i<n;i++){
    b[i]=b[i-1]+(int(s[i])-97)+1;
}
while(k--){
ll l,r,c=0;
cin>>l>>r;

if(l==1){
            cout<<b[r-1]<<endl;
        }
        else{
            cout<<b[r-1]-b[l-2]<<endl;}

}
return 0;
}
