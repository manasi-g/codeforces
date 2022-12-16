#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t,a,b;
cin>>t;
string s;
cin>>s;
a=count(s.begin(),s.end(),'A');
b=count(s.begin(),s.end(),'D');
if(a>b) cout<<"Anton";
else if(b>a) cout<<"Danik";
else
{
    cout<<"Friendship";
}
return 0;
}
