#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,c=0,d=-1;
cin>>n;
string a,b;
cin>>a>>b;

for(ll i=0;i<n;i++) {
    if(a[i]!=b[i] )    c+=2;
    else if(a[i]=='0' && b[i]=='0' && a[i+1]=='1' && b[i+1]=='1' ||  a[i]=='1' && b[i]=='1' && a[i+1]=='0' && b[i+1]=='0' )   { c+=2;
    i++;}
    else if(a[i]=='0' && b[i]=='0') c++;
   
}

// 101 101

cout<<c<<endl;
}
return 0;
}
