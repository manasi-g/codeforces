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
    ll m;
    cin>>m;
    ll b[m];
    for(int i=0;i<m;i++)    cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);
    if(b[m-1]>a[n-1])   {cout<<"Bob"<<endl;
        cout<<"Bob"<<endl;}
    else if(a[n-1]>b[m-1])  { cout<<"Alice"<<endl;
        cout<<"Alice"<<endl;}
        else   { cout<<"Alice"<<endl;
        cout<<"Bob"<<endl;} 
   
    
}
return 0;
}
