#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,k;
		long long x,y,sum=0,min1=10,max1=0,u=0,rem=0;
        cin>>a>>k;
        for(int i=2;i<=k;i++)
        {
        x=a;
        min1=10;
        max1=0;
        while(x>0){
            rem=x%10;
            min1=min(min1,rem);
            max1=max(max1,rem);
            x/=10; 

        }
        u=min1*max1;
        if(u==0)
        {
        	break;
		}
        a=a+u;
        }
        cout<<a<<endl;
    }
}