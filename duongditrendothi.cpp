#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
bool visited[1001];//de danh dau la da tham dinh do ha chua
vector<int>adj[1001];//de luu danh sach ke moi phan tu la 1 vector
int parent[1001];
dfs(int u){
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]){
		// phu dinh cua not true la false nghia la no chua duoc tham thi
		// ghi nhan cua thang x la u
		// chi so la con gia tri la cha
		parent[x]=u;
		dfs(x);
		}
	}
}
void search(int s,int t){
	memset(visited,false,sizeof(visited));// nghia la cho tat ca cac phan tu cua mang visited la false
	memset(parent,0,sizeof(parent));
	dfs(s);
	if(!visited[t])
	// nghia la t chua duoc tham nghia la no s no khong loang dc toi t
	cout<<"NOT FOUND";
	else{
		// truy vet duong di bang cach truy tu cha cua thang t truy nguoc ve
		vector<int>path;// de luu duong di
		while(t!=s){
			path.push_back(t);
			t=parent[t];// tuc la truy vet lai cha cua no
		}
		path.push_back(t);
		reverse(path.begin(),path.end());
		for(int x:path){
			cout<<x<<" ";
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	cin>>s>>t;
	search(s,t);
}
