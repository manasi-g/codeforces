#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m=INT_MIN,c=0,k=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m)  m=a[i];
    }
    ll b[m+1]={0};
    for(ll i=0;i<n;i++){
       b[a[i]]++;
    }
    for(ll i=0;i<=m;i++){
       if(b[i]>=1)  { c+=1; }
       if(b[i]>1)   k+=(b[i]-1);
       
    }
    //1 2 2
    if( k%2==1 ) c--;
    cout<<c<<endl;

}
return 0;
}
