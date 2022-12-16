#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t,max,c1=1,c2=0;
cin>>t;
string a,b,c;
cin>>a;
t--;
while(t--){

cin>>b;
if(a==b){
    c1++;
}
else{
     c=b;
    c2++;
}

}
if(c1>c2){
cout<<a;
}
else{
    cout<<c;
}

return 0;
}
