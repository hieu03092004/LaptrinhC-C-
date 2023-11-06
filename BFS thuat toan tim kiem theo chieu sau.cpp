#include<bits/stdc++.h>
// tim kiem theo chieu rong
using namespace std;
int n,m;// n la so dinh m la so canh
bool visited[1001];
vector<int>adj[1001];//nay co nghia la mang adj co 1001 phan tu moi phan tu la 1 vecto
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	// luc nay minh da co duoc danh sach ke roi
}
void bfs(int u){
	memset(visited,false,sizeof(visited));// nay co nghia la gan cac gia tri cua mang visited bang 0
	queue<int>q;//buoc 1 tao 1 cai hang doi rong
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
	// dau nay co nghia la phu dinh
	//chung nao hang doi cua minh con khac rong
	int v=q.front();
	cout<<v<<" ";
	q.pop();
	// duyet danh sach ke cua cac dinh o dau hang doi neu no chua duoc tham thi dua vao hang doi
	// va danh dau no da duoc tham roi de co j minh xet trong hang doi tranh bi lap vinh vien
	for(int x:adj[v]){
		if(!visited[x]){//nay co nghia la phu dinh cua false la true
			q.push(x);
			visited[x]=true;//danh dau la da duoc tham roi de no loang ra
			}
		}
	}
}
int main(){
	inp();
	bfs(1);
}
