#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
ll n;
cin>>n;
ll a[n];
map<int, int> count;

    for (int i = 0; i < n; i++){
        cin>>a[i];
        count[a[i]]++;
 }
    int next_missing = 1;
    for (int i = 0; i < n; i++) {
        if (count[a[i]] != 1 || a[i] > n || a[i] < 1) {
            count[a[i]]--;
 
            // Find next missing element to put
            // in place of current element.
            while (count.find(next_missing) != count.end())
                next_missing++;
 
            // Replace with next missing and insert the
            // missing element in hash.
            a[i] = next_missing;
            count[next_missing] = 1;
        }}
        cout<<next_missing<<endl;
  for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
 }      
 cout<<endl;
return 0;
}
