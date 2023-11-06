#include<bits/stdc++.h>
using namespace std;
const int maxn=10001;
int n,m;
vector<int>adj[maxn];
bool visited[maxn];
vector<int>topo;//thuat toan sap xep topo nay dung de neu co duong di tu dinh u toi dinh v thi dinh u se luon xuat hien truoc dinh v
//thuat toan sap xep topo nay chi ap dung cho do thi khong co chu trinh
void inPut(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		//do thi co huong 
		adj[x].push_back(y);
	}
	memset(visited,false,sizeof visited);
}
void Dfs(int u){
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x])
			Dfs(x);
	}
	topo.push_back(u);
}
int main(){
	inPut();
	for(int i=1;i<=n;i++){
		if(!visited[i])
			Dfs(i);
	}
	reverse(topo.begin(),topo.end());
	for(int x:topo){
		cout<<x<<" ";
	}
}
