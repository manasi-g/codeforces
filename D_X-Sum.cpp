#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
int n,m,c=0,mi=INT_MIN;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for (int j=0;j<m;j++) {
         cin>>a[i][j];
    } 
}

for(int i=0;i<n;i++){
    for (int j=0;j<m;j++) {
         c=a[i][j];
         int x,y;
         x=i-1;y=j-1;
         while(x>=0 && y>=0){
             c+=a[x][y];
             x--; y--;
         }
         mi=max(mi,c);

        x=i-1;y=j+1;
         while(x>=0 && y<m){
             c+=a[x][y];
             x--; y++;
         }
         mi=max(mi,c);

        x=i+1;y=j-1;
         while(x<n && y>=0){
             c+=a[x][y];
             x++; y--;
         }
         mi=max(mi,c);

          x=i+1;y=j+1;
         while(x<n && y<m){
             c+=a[x][y];
             x++; y++;
         }
         mi=max(mi,c);
    } 
}
cout<<mi<<endl;
}
return 0;
}
