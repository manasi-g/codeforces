#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll a,b,A,B;
set <ll> s;
cin>>a>>b;


A=(a+b)/2;
B=a+b-A;
//case 1
for(ll i=0;i<=min(a,A);i++){
    if(a-i<=B)
    s.insert(a-i+A-i);
   
}
//case 2
for(ll i=0;i<=min(a,B);i++){
    if(a-i<=A)
    s.insert(a-i+B-i);
   
}

 cout<<s.size()<<endl;
 for(int i: s)  cout<<i<<" ";
 cout<<endl;

}
return 0;
}
