#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            cout<<"";
        }
        else{
            cout<<"."<<s[i];
        }

    }
}