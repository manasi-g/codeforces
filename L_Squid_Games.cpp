#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll n,r=INT_MAX,x=0;
    cin>>n;
    ll v[n];
    for(ll i=0;i<n;i++){
        cin>>v[i];
        r=min(r,v[i]);
    }
    for(ll i=0;i<n;i++){
        v[i]-=r;
    }
    r=r%n;
	
	while(v[r]-x>0){
		x++;
		r=(r+1)%n;
	}
	cout<<r+1<<endl;
return 0;
}

