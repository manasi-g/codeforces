#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int a,b,c;
	cin>>a>>b>>c;
	int exp1=a+b+c;
	int exp2=a*b*c;
	int exp3=a+b*c;
	int exp4=a*b+c;
	int exp5=a*(b+c);
	int exp6=(a+b)*c;
	cout<<max(exp1,max(exp2,max(exp3,max(exp4,max(exp5,exp6)))));
return 0;
}
