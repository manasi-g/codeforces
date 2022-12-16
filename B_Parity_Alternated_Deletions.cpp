#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n,o=0,e=0,j=0,k=0,sum=0,flag=0;
cin>>n;
ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)   e++;
        else
        {
            o++;
        }
    }
   //cout<<o<<" "<<e;
sort(a, a + n, greater<int>());
ll b[o];
ll c[e];
 ll diff=o-e;
 for(ll i=0;i<n;i++){
        if(a[i]%2==1) {b[j]=a[i];
        j++;}
        else
        {c[k]=a[i];
        k++;
        
        }
    }
    if(diff==1 || diff==0 ){
        sum=0;
        
    }
    else if(o>e){
    
   
        for(ll i=e+1;i<j;i++){
            //cout<<b[i]<<" ";
            sum+=b[i];
        }                                   //2 4 6 8 1
    
    }
    else{
        
    
   
        for(ll i=o+1;i<k;i++){
            //cout<<c[i]<<" ";
            sum+=c[i];
        }
    
    }
cout<<sum;

}
