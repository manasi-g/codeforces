#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m;
vector<string>v;
k=n;
while(k--){
    string s;
    cin>>s;
    v.push_back(s);
}
int mi=INT_MAX,c=0;
for(int i=0;i<n;i++){
   
    for(int j=i+1;j<n;j++){
        c=0;
       
        for(int k=0;k<m;k++){
            c+=abs(v[i][k]-v[j][k]);
        }
        mi=min(mi,c);
    }
}
cout<<mi<<endl;
}
return 0;
}
