#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast


 long long n,k,c=0,u=0,m=0,r,t,v=0,c1=0,flag=0;
    cin>>n;
    k=n;
    while(k!=0){
        m=k%10;
        if(m==4 || m==7)    u++;
        k/=10;
    } 
    
    if(u==4 || u==7)    cout<<"YES";
    else
    {
        cout<<"NO";
    }
}

