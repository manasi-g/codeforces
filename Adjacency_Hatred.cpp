#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,e=0,o=0,r=0,f=0;
    cin>>n;
    ll a[n];
    vector<ll>ev;
    vector<ll>od;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) { 
             e++; 
            ev.push_back(a[i]);
        }
        else{ 
            o++;
             od.push_back(a[i]);
             }
        
    }
     for(ll i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])%2==1){
            r++;
        }
    }
    if(r==n-1) { cout<<-1<<endl;}
    else if(e>o+1 || o>e+1) { cout<<-1<<endl;}
    else{
        ll j=0,k=0;
        if(e>o){
            while(j!=o){
                    cout<<ev[j]<<" "<<od[j]<<" ";
                    j++;
            }
            cout<<ev[j]<<endl;
        }
        else{
             while(j!=e){
                    cout<<od[k]<<" "<<ev[j]<<" "; 
                    j++;
            }
            cout<<od[j]<<endl;;
        }
       
        
    }
   
}
return 0;
}
