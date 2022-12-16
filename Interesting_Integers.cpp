#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
int p=1;
while(t--){
    int a,b,c=0,d=0,u=1;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        int k=i;
        while(k!=0){
            c+=k%10;
            u*=k%10;
            k/=10;
        }
        //cout<<u<<" "<<c<<endl;
        if(u%c==0)  d++;
        c=0,u=1;


    }
    cout<<"Case #"<<p<<": "<<d<<endl;
    p++;
}
return 0;
}
