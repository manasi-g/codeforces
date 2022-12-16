#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll k,n,m,p1=0,p2=0,j=0,flag=0;
cin>>k>>n>>m;
ll a[n],b[m],c[n+m];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
for(ll i=0;i<m;i++){
    cin>>b[i];
    
}
while(p1<n || p2<m){
    if(p1<n && a[p1]==0){
        c[j]=0;
        k++;
        j++;
        p1++;
    }
    else if(p2<m && b[p2]==0){
        c[j]=0;
        k++;
        j++;
        p2++;
    }
    else if(p1<n && a[p1]<=k){
        c[j]=a[p1];
        j++;
        p1++;
    }
    else if(p2<m && b[p2]<=k){
        c[j]=b[p2];
        j++;
        p2++;
    }
    else{
        cout<<-1<<endl;
         flag=1;
        break;
       
    }

}
if(flag==0)

{for(ll i=0;i<n+m;i++){
    cout<<c[i]<<" ";
}
cout<<endl;}
//return 0;
}}
