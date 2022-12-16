#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)    cin>>a[i];
int sum;
cin>>sum;
int t[n+1][sum+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
        if(i==0)    t[0][j]=0;
        else if(j==0)   t[i][j]=1;
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
        if(a[i-1]<=j){
            t[i][j]=t[i-1][j]+t[i][j-a[i-1]];
        }
        else
        {
            t[i][j]=t[i-1][j];
        }
    }}
    cout<<t[n][sum];
return 0;
}
