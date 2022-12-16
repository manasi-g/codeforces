#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    double n,u=0;
    cin>>n;
    string s;
    double k;
     vector<pair<string,double>> v;
	 vector<string> p;
    for(ll i=0;i<n;i++){
         cin>>s>>k;
        v.push_back(make_pair(s,k));
        if(k>u) u=k;
    }
    for(ll i=0;i<n;i++){
         if(v[i].second==u){
             p.push_back(v[i].first);
         }
    }
	sort(p.begin(),p.end());
	for(ll i=0;i<p.size();i++){
        cout<<p[i]<<endl;
    }
   
}

return 0;
}
