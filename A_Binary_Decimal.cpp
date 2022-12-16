#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n,b,c=0,k;
cin>>n;
b=n;
ll max=-1;
while(b>0){
    k=b%10;
if(k>max){
    max=k;
}
   b=b/10; 
}
cout<<max<<endl;
}
}

