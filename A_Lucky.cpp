#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int a=s[0]+s[1]+s[2]-3*'0';
    int b=s[3]+s[4]+s[5]-3*'0';
    if(a==b)    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}
