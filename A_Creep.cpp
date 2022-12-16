#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
     int a,b;
    cin>>a>>b;
     string c="";
    //0101011111
    int k=min(a,b);
    if(b>a){
          for(int i=0;i<a;i++){
            c+="10";
        }
    
    for(int i=0;i<(b-a);i++){
        c+="1";
    }
    cout<<c<<endl;
    }
   else if(a>=b){
      for(int i=0;i<b;i++){
            c+="01";
        }
    
    for(int i=0;i<(a-b);i++){
        c+="0";
    }
    cout<<c<<endl;
   }
}
return 0;
}
