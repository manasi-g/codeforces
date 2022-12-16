#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k=0,p=0;
    cin>>n;
    ll a[n],b[n],c[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    //2 1 
    sort(b,b+n);
    for(ll i=0;i<n;i++){
        if(a[i]==b[i])  {
            a[i]=-1;
            k++;
        }
    }
    if(n==1)  cout<<-1; //check this later
     else{
    for(ll i=0;i<n;i++){
       if(a[i]==-1 && i==0){
           c[i]=b[i+1];
           c[i+1]=b[i];
           b[i+1]=c[i+1];
            b[i]=c[i];
          p++;
            i++;
       }
       else if(a[i]==-1 && i==n-1){
           c[i]=b[i-1];
           c[i-1]=b[i];
            b[i-1]=c[i-1];
            b[i]=c[i];
             p++;
           i++;
       }
       else if(a[i]==-1){
            c[i]=b[i+1];
           c[i+1]=b[i];
           
             b[i+1]=c[i+1];
            b[i]=c[i];
             p++;
           i++;
       }
       else{
        if(a[i]!=b[i]){
            c[i]=b[i];
        }
        else{
            c[i]=b[i+1];
            swap(b[i],b[i+1]);
        }}
    }
    
   //cout<<p<<" ";
    for(ll i=0;i<n;i++){
        cout<<c[i]<<" ";
    }}
    cout<<endl;
    
}
return 0;
}

