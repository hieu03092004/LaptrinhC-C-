#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[1001];
bool visited[1001];
void in(){
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
bool dfs(int u,int par){
	visited[u]=true;//de danh dau la dinh u da duoc tham roi 
	for(int v:adj[u]){
		if(!visited[v]){
			if(dfs(v,u))
				return true;
		}
		else if(v!=par)
			return false;
	}
	return false;
}
int main(){
	cin>>n>>m;
	in();
	if(dfs(1,0))
		cout<<"YES";
	else
		cout<<"NO";
}
