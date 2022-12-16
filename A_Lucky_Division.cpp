#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    long long n,k,c=0,u=0,m=0,r,t,v=0,c1=0,flag=0;
    cin>>n;
    k=n;
    while(k!=0){
        m=k%10;
        if(m==4 || m==7)    u++;
        k/=10;
        c++;
    } 
    for(int i=1;i<n;i++)
    {   t=i;
        while(t!=0){
        long long x=t%10;
        if(x==4 || x==7)    v++;
        t/=10;
        c1++;
    } if(v==c1){
        if(n%i==0) { 
            flag=1;
        }
        else{
            c1=0;
            v=0;
        }
        
    }
     else{
            c1=0;
            v=0;
        }
        
        
    }
    
    if(u==c){
        cout<<"YES"<<endl;
    }
    else if(flag==1)    cout<<"YES";
    else
    {
        cout<<"NO";
    }
}