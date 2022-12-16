#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int subsetsum(int arr[],int n, int s){
     int t[n+1][s+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(j==0)   t[i][j]=1;
                else if(i==0)    t[i][j]=0;
            }
        }
        for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (j < arr[i - 1])
                t[i][j] = t[i - 1][j];
            if (j >= arr[i - 1])
                t[i][j] = t[i - 1][j]
                               || t[i - 1][j - arr[i - 1]];
        }
            
    }
    int diff = INT_MAX;
  for (int j = s / 2; j >= 0; j--) {
        if (t[n][j] == true) {
            diff = s - 2 * j;
            break;
        }
    }
    return diff;

}
int32_t main(){
fast
int n=3,sum=0;
int a[]={1,2,7};
for(int i=0;i<n;i++)    { sum+=a[i];}

cout<<subsetsum(a,n,sum);

return 0;
}
