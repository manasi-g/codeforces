#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,c=0;
cin>>n>>m;
for(ll i=1;i<=m;i++){
    c+=(n+(i%5))/5;
}
cout<<c;
return 0;
}     
 


 
