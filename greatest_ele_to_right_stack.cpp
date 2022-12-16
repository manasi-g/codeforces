#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
int32_t main(){
    vector<int>nums1,nums2;

stack<int>st;
        vector<pair<int,int>>v;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty())   v.push_back(make_pair(nums2[i],-1));
            else if(!st.empty() && nums2[i]<st.top())    v.push_back(make_pair(nums1[i],st.top()));
             else if(!st.empty() && nums2[i]>=st.top()){
                 while( (!st.empty() && nums2[i]>=st.top())){
                     st.pop();
                 }
                 if(st.empty())  v.push_back(make_pair(nums1[i],-1));
            else
            {
                 v.push_back(make_pair(nums1[i],st.top()));
            }
             }
            st.push(nums2[i]);
        }
       reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i].second<<" ";

}
