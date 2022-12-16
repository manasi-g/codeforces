#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll d,m,n,u,k;
cin>>d>>m>>n;
ll v[n+2];
k=0;
ll flag=0;
v[0]=0; v[n+1]=d;
for(ll i=1;i<=n;i++){
    cin>>v[i]; 
}
ll numRefills = 0,lastrefill;
ll currentRefill = 0;
ll currentFuel = m;
while(currentRefill<=n){
    lastrefill=currentRefill;
   while(v[currentRefill+1] - v[lastrefill]<=m) {
      currentRefill++;  
   } 
   if( currentRefill==lastrefill ) {
      flag=1;
       break;
   }
   numRefills++;
}
if(flag==1) cout<<-1<<endl;
else    cout<<numRefills-1<<endl;
return 0;
}
