#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,m,a,k=0,c=0,k1,c1=0;
cin>>n>>m>>a;

if(n*m==a*a)    cout<<1;
else{
k=n/a; //k=2
k1=m/a; //k1=1
if((n)%a>0)   c=1;    //c=0

if((m)%a>0)   c1=1;  //c1=0
cout<<((c+k)*(k1+c1));
}
return 0;
}
