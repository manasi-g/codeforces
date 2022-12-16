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
ll a[n];
for(int i=0;i<n;i++)    cin>>a[i];
sort(a,a+n);
int c=a[n-1]+a[n-2];
cout<<c<<endl;
}
return 0;
}
