#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fo(i,n) for(i=0;i<n;i++)
#define mod 1000000007
#define mp make_pair
void dfs_tree(int curc,int cityB,vector<pair<int,int>> vec[],vector<int> memo ,int *mini,int K,int visited[])
{
if(curc==cityB){
sort(memo.begin(),memo.end());
int res=0,i;
fo(i,memo.size()-K) res+=memo[i];
*mini=min(*mini,res);
memo.clear();

}
else{
visited[curc]=1;
for(int i=0;i<vec[curc].size();i++)
{
if(visited[vec[curc][i].first]==0){
memo.push_back(vec[curc][i].second);
visited[vec[curc][i].first]=1;
dfs_tree(vec[curc][i].first,cityB,vec,memo,mini,K,visited);
visited[vec[curc][i].first]=0;
memo.pop_back();
}
}
}
}
int main()
{
fastio;
int a,b,i,j,k,T,cityA,cityB,N,M,K,roadp,cost,mini=INT_MAX;
cin>>N;
cin>>cityA>>cityB;
cin>>K;
cin>>M>>roadp;
vector<pair<int,int>> vec[N]; int visited[N]={0}; vector<int> memo;
fo(i,M)
{
cin>>a>>b>>cost;
vec[a].push_back(mp(b,cost));
vec[b].push_back(mp(a,cost));
}
// cout<<vec.size()<<" ";
dfs_tree(cityA,cityB,vec,memo,&mini,K,visited);
cout<<mini;
}