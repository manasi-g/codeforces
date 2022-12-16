#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,sum=0,c=0;;
    cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum>=2)  c++;
        sum=0;
    }
    cout<<c<<endl;
    }