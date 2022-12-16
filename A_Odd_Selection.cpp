#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,even=0,odd=0,flag=0,sum=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)   even++;
            else    odd++;
            
        }
        if(odd%2==0){
                flag=0;
            }
        else{
            flag=1;
        }    
             sum=odd+even;
            if(sum>=x && flag==1)   cout<<"Yes"<<endl;
            else if(sum>x && flag==0)   cout<<"Yes"<<endl;
            else if(sum==even)   cout<<"No"<<endl;
            else    cout<<"No"<<endl;
        
    }
}