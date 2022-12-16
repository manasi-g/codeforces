#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int main() {
    int n;
    cin>>n;
    vector<int> q(n);
    map<int,int> a;
    map<int,int> b;
    int ans=1;
    for(int i=1;i<=n;i++){
        int key;
        cin>>key;
        a[key]++;
		b[a[key]]++;
		
		if(a[key]*b[a[key]]==i&&i!=n)
        { 
            ans=i+1;
		}
		else if(a[key]*b[a[key]]==i-1) 
        {
            ans=i;
		}
        
    }
    cout<<ans<<endl;
    
    
 
}