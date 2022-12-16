#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
    ll a,b,x,z=0,o=0;
    cin>>a>>b>>x;
    string s;

    for(ll i=0;i<x-1;i++){
        if(a>b){
        if(i%2==0)  {s+='0';    z++;}
        else    {s+='1';    o++;}}
        else{
            if(i%2==1)  {s+='0';    z++;}
        else    {s+='1';    o++;}
        }
    }
    if((x-1)%2==0){
        for(ll i=0;i<b-o;i++){
            s+='1';
        }
        for(ll i=0;i<a-z;i++){
            s+='0';
        }
        }
    else{
       
        for(ll i=0;i<a-z;i++){
            s+='0';
        } 
        for(ll i=0;i<b-o;i++){
            s+='1';
        }
    }
    
    cout<<s;

return 0;
}
J:
int v[1005];
int main() {
    int n,a,b,c,t;
    cin >> n >> a >> b >> c >> t;
    for(int i=0;i<n;i++) {
        cin >> v[i] ;
    }
    int ans = 0;
    if( b >= c ){
        ans = n * a;
    }
    else{
        for(int i =0;i<n;i++){
            ans += a + (c-b)*(t-v[i]);
        }
    }
 
    cout << ans;
}
l;
int main() {
    int n;
    cin>>n;
    vector<int> q(n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>q[i];
        mini=min(mini,q[i]);
    }
    for(int i = 0; i < n; i++) q[i] -= mini;
 
	mini %= n;
	int x = 0;
	while(q[mini] - x > 0){
		x++;
		mini = (mini + 1) % n;
	}
	cout << mini+1 << endl;
    
 
}