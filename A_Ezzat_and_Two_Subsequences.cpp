#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n],sum=0;
ll b=INT_MIN;
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
    if(a[i]>b)  b=a[i];
}
//cout<<b<<endl;
sum=sum-b;
double w=double(sum)/double(n-1)+b;
cout<<fixed<<setprecision(9)<<w<<endl;

}
return 0;
}
