#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string a,b,c,d,e,f,u;
cin>>a>>b>>c;
ll k[3]={0};

    if(a[1]=='>'){
        k[a[0]-65]++;        //BA //CB //CA  //CBBA                   //BA //BC
    }
    else{
        k[a[2]-65]++;
    }
    if(b[1]=='>'){
        k[b[0]-65]++;  
    }
    else{
       k[b[2]-65]++;  
    }
     if(c[1]=='>'){
       k[c[0]-65]++;  
    }
    else{
        k[c[2]-65]++;  
    }
    int p=0;
    if(k[0]==1 && k[1]==1 && k[2]==1)  cout<<"Impossible";
    else
    {for(ll i=0;i<3;i++){
        if(k[i]==0){
            cout<<char(i+65);
            
        }
    }
    for(ll i=0;i<3;i++){
        if(k[i]==1){
            cout<<char(i+65);
        }
    }
    for(ll i=0;i<3;i++){
        if(k[i]==2){
            cout<<char(i+65);   
        }
    }}
    
return 0;
}
