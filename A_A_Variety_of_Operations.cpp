#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
ll c,d,a=0,b=0;
cin>>c>>d;
if(c==0 && d==0)    cout<<0<<endl;
else if(abs(c-d)%2==1) cout<<-1<<endl;
else if(c==d)    cout<<1<<endl;
else if(abs(c-d)%2==0) cout<<2<<endl;

}
return 0;
}
