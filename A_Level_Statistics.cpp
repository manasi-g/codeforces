#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int p[n],c[n];
        for(int i=0;i<n;i++){
            cin>>p[i]>>c[i];
        }
        if(n==1){
            if(c[0]>p[0])   flag=1;
        }
        else
        {
            for(int i=0;i<n;i++){
             for(int j=1;j<n;j++){
            if(p[i]>p[j]) flag=1;
           else if(c[i]>c[j]) flag=1;
            else if(p[i]<c[i])   flag=1;
            else if(p[j]-p[i]<c[j]-c[j]) flag=1;
        }}}
        if(flag==1)    cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }
}