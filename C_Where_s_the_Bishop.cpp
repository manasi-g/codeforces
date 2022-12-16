#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    char a[9][9];
    ll c=0,k=0,p=0;
    vector< pair <int,int> > v;
   // vector<int>v;
    string s;
    for(ll i=0;i<8;i++){
        for(ll j=0;j<8;j++){
            cin>>a[i][j];
            
            if(a[i][j]=='#')    {c++; p=j;}
        }
       v.push_back(make_pair(c,p));
       c=0;
    }
    
    //cout<<c;
  for(ll i=0;i<v.size()-2;i++){
      if(v[i].first==2 && v[i+1].first==1 && v[i+2].first==2) cout<<i+2<<" "<<v[i+1].second+1<<endl;
  }
}
return 0;
}
