#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string s,l;
    cin>>s;
    ll n;
    cin>>n;
    ll c=0;
    
    int hour=s[1]-'0'+10*(s[0]-'0');
    int minut=s[4]-'0'+10*(s[3]-'0');
    //cout<<n<<endl;
    int a=n/60;
    int b=n%60;
    int h=0;
    while(h<3600){
        h++;
        string x="",y="";
        
        minut+=b;
        hour+=a;
        if(minut>=59)  {
            hour+=minut/60;
            minut=minut%60;
            
        }
       if(hour>23)  hour=hour%24;
        if(hour%10==minut/10 && hour/10==minut%10)  c++;
        
         x=to_string(hour);
         y=to_string(minut);
        if(minut/10==0)  {
            y="0"+y;
        }
        if(hour/10==0){
            x="0"+x;
        }
        l=x+":"+y;
       //cout<<l<<" ";
       
        if(l==s)    break;

    }
    cout<<c<<endl;
    //cout<<endl;
}
return 0;
}
