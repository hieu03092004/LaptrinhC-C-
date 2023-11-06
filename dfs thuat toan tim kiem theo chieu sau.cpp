#include<bits/stdc++.h>
using namespace std;
int n,m;//n la so dinh m la so canh
vector<int>adj[1001];//cung dung 1 cai mang adj de luu danh sach ke
bool visited[1001];// cung tao 1 cai mang bool de danh dau dinh u da duoc tham hay chua
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}
void dfs(int u){
	memset(visited,false,sizeof(visited));
	cout<<u<<" ";
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]){
			//tuc la no chua duoc tham
			// thi minh se loang ra theo chieu sau loang toi luc no khong loang dc nx
			// thi no se quay lui la nhung co if nen no se ko loang cac dinh da duoc tham nx
			// luc do no se chay xong va duoc day dan ra khoi bo nho stack
			dfs(x);
		}
	}
}
int main(){
	input();
	dfs(1);
}
