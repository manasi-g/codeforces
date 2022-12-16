#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,m,c=0,f=0,f1=0,k=0,m1=INT_MIN,m2=INT_MAX,r=0,q=0;
    cin>>n>>m;
    ll a[n][m];
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            if(a[i][j]>m1)  m1=a[i][j];
            if(a[i][j]<m2)  m2=a[i][j];
            
           

        }   
           if(r==m) {q=i; }
    }
      
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            if(a[i][j]==m1) f=j;
             if(a[i][j]==m2) f1=j;

           

        }   
       v.push_back(make_pair(f, f1));
       
    }
    for(int i=0;i<n;i++){
       
        if(v[i].first!=v[i-1].first || v[i].second!=v[i-1].second)  k=1;
        cout<<v[1].first<<" "<<v[1].second<<" ";
    }
    
    // if(k)  cout<<"-1"<<endl;
    // else    cout<<v[0].first+1<<" "<<v[0].second+1<<endl;  
    cout<<endl;
}
return 0;
}
