#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,c=0;
    string s;
    cin>>n>>s;
    reverse(s.begin(),s.end());
    for(ll i=0;i<n;i++){
        if(s[i]==')')   c++;
		else    break;
    }
    if(c*2>n)   cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
	
}
return 0;
}
