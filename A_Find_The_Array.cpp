#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll s,n,c=0,p=0;
cin>>s;
n=1;

while(p<s){
    p+=n;
    n=n+2;
    
    c++;
}
cout<<c<<endl;

}}
