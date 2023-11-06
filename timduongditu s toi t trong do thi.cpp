#include<bits/stdc++.h>
using namespace std;
// tim duong di tu dinh s toi t tren do thi
//10 8
//1 2
//2 3
//2 4
//3 6
//3 7
//5 8
//6 7
//8 9
//1 7
int n,m,s,t;//n la so dinh canh
bool visited[1001];
vector<int>adj[1001];
int parent[1001];//de luu cha cua dinh da mo rong ra dinh kia
// cha se la gia tri con la chi so ben duoi
void dfs(int u){
//	memset(visited,false,sizeof(visited));
//	memset(parent,0,sizeof(parent));
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]){
			// nghia la no chua duoc tham thi
			parent[x]=u;
			dfs(x);
		}
	}
}
void search(int s,int t){
	dfs(s);
	if(!visited[t]){
		// nghia la neu thang t chua duoc tham sau khi da goi dfs(s) thi chung to 
		//la s no khong the loang toi t;
		cout<<"Khong co duong di";
	}
	else{
		// truy vet duong di
		vector<int>path;//dung 1 cai mang de luu duong di
		// truy nguoc ve
		while(t!=s){
			path.push_back(t);
			// sau do tim cha cua thang t la ai
			// nghia la tim xem thang nao da mo rong ra no hay noi cach khac la truy nguoc ve
			t=parent[t];//con luu o chi so cha luu o gia tri
		}
		// sau khi vong while nay ket thuc no da truy vet duoc toi thang s
		// nhung chua kip luu do gap dieu kien
		path.push_back(s);
		// sau do lat nguoc xau se ra duoc duong di chinh xac
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
