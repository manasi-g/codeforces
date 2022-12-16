#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
int n,c=0,c1=0;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='(')   c++;
    else if(s[i]==')')   c--;
    if(c<0){
        c=0;
        c1++;
    }
}
cout<<c1<<endl;
}
return 0;
}
