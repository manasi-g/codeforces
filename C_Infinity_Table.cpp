#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,a,b,c,d;
cin>>n;
a=sqrt(n);
if(a*a==n){
    cout<<a<<" "<<1<<endl;
}
else{
    
    if((a+1)*(a+1)-n>n-a*a){
       cout<<n-a*a<<" "<<a+1<<endl; 
    }
    else{
        cout<<a+1<<" "<<(a+1)*(a+1)-n+1<<endl;
    }
}
}
return 0;
}
