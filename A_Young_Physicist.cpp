#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int n,x=0,y=0,z=0;
cin>>n;
int a[n][3];
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>a[i][j];
        if(j==0){
            x+=a[i][j];
        }
        else if(j==1){
            y+=a[i][j];
        }
        else if(j==2){
            z+=a[i][j];
        }
    }
}

if(x==0 && y==0 && z==0)    cout<<"YES";
else
{
    cout<<"NO"
;}
return 0;
}
