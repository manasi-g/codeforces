#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int t;
cin>>t;
while(t--){
    ll i,j,k;
	cin>>i>>j>>k;
	if (i == j && j == k) {
		cout << "YES"<<endl;
		cout<<i<<" "<<i<<" "<<i<<endl;
		
	}
	else if (i == j) {
		if (k < i) {
			cout << "YES"<<endl<<i<<" "<<k<<" "<<k<<endl;
		}
		else cout << "NO"<<endl;
		
	}
	else if (i==k) {
		if (i>j) {
			cout << "YES"<<endl;
			cout << j << " " << i << " " << j << "\n";
		}
		else cout << "NO"<<endl;
		
	}
	else if (k == j) {
		if (i < k) {
			cout << "YES\n";
			cout << i << " " << i << " " << k << "\n";
		}
		else cout << "NO"<<endl;
		
	}
	else cout << "NO"<<endl;
}
return 0;
}
