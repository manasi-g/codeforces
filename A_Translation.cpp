#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
string a,b;
cin>>a>>b;
int c=0;
int l=a.length();
for(int i=0;i<l;i++){
    if(a[i]==b[l-1-i])  c++;
}
if(c==l)    cout<<"YES";
else
{
    cout<<"NO";
}
return 0;
}
