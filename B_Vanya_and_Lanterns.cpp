#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,l;
double d,m,r;
cin>>n>>l;
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];
if(n>1)
{sort(a,a+n);

m=a[1]-a[0];
d=a[0]-0;
double c=l-a[n-1];
for(ll i=0;i<n-1;i++){
if((a[i+1]-a[i])>m){
    m=a[i+1]-a[i];
}

}
r=max(m/2,max(d,c));}
else{
    if(a[0]==0){
        double k=1;
       r=max(a[0]-a[0]+1,l-a[0]);
    }
    else   { 
        r=max(a[0],l-a[0]);
    }
}
    std::cout << std::fixed << std::setprecision(10) << r;

return 0;
}
