#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
fast
int input1;
cin>>input1;
int input2[input1];
for(int i=0;i<input1;i++)   cin>>input2[i];
     int counter;
	    for(int i=0; i<input1; i++){
	        counter = 0;
	        for(int j=0; j<i; j++){
	            if (input2[j] > input2[i]){
	                counter += 1;
	            }
	            
	        }
	        	cout<<counter<<" ";
	    }

}
