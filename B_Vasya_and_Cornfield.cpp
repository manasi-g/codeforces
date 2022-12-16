#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,d,t;
cin>>n>>d;
cin>>t;
while(t--){
int a,b,c,e,flag=0;

cin>>a>>b;
c=a+b;
e=a-b;  
if(c<=2*n-d && c>=d && e>=-d && e<=d){
    flag=1;
}

if(flag==0){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
