#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int M,rd,yl,gr;
        bool flag=0;
        cin>>M;
        if(M>550){
            cout<<"NO"<<endl;
        }else if(M%2==0){
            cout<<"NO"<<endl;
        }else{
            for(int i=51;i>=0;i-=2){
                rd=i*3;
                for(int j=150;j>=0;j-=2){
                    yl=j*2;
                    gr=M+rd-yl;
                    if((gr-1)%2==0 || (gr>=0 && gr<=100)){
                        flag=1;
                        cout<<"NO"<<endl;
                        break;
                    }

                }
                if(flag==1){
                    break;
                }
            }
            if(flag==0){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}