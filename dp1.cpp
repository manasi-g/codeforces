#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){

int p[8]={ 1, 5, 8, 9, 10, 17, 17, 20 };
int a[8]={1,2,3,4,5,6,7,8};
int n=8;
int t[n+1][n+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        if(i==0 || j==0)    t[i][j]=0;
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i-1]<=j){
            t[i][j]= max( (p[i-1] + t[i][j-a[i-1]]), t[i-1][j] );
        }
        else
        {
            t[i][j]=t[i-1][j];
        }
    }}
cout<<t[n][n];
return 0;
}
