#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll n,k=0;
    string s;
    cin>>n>>s;
    vector<int> v;
    for (int i = 0; i<n; ++i){
         if (s[i] == '2')   k++;
         }
  
    if (k == 1 || k == 2) {
      cout<<"NO"<<endl;
      continue;
    }
    char t[n][n];
    for (int i=0; i<n; i++){
      for(int j=0;j<n;j++){
         if(i==j) t[i][j]='X';
        else t[i][j]='=';
      }
    }
    
    for (int i=0;i<n;i++){
      if(s[i]=='2')
      for(int j=i+1;j<n+i;j++){
        if(s[j%n]=='2'){
          t[i][j%n]='+';
          t[j%n][i]='-';
          break;
        }
      }
    }
     
    cout<<"YES"<<endl;
   for (int i=0; i<n; i++){
      for(int j=0;j<n;j++){
        
          cout<<t[i][j];
      }
      cout<<endl;
    }
 
}
return 0;
}
