#include<bits/stdc++.h>
using namespace std;
int n,m;//n la so dinh m la so canh
bool visited[1001];//tao 1 cai mang visited de danh dau xem da tham thang do ha chua
vector<int>adj[1001];//de luu sang cac danh sach ke
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);// day la do thi vo huong;
	}
}
void dfs(int u){
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x]){
		dfs(x);	
		}
	}
}
void bfs(int u){
	//b1 khoi tao mot cai queue rong
	queue<int>q;
	q.push(u);
	visited[u]=true;//danh dau la no da duoc tham roi
	// sau do day thang dau tien vao hang doi
	while(!q.empty()){
		// bat dau loang
		// lay dinh dau tien o dau hang doi ra
		int v=q.front();
		// sau do xoa no khoi hang doi
		q.pop();
		for(int x:adj[v]){
			if(!visited[x]){
				// neu ma no chua duoc tham thi
				// day no vao trong hang doi va danh dau no da duoc tham roi
				q.push(x);
				visited[x]=true;
			}
		}
	}
}
//conected component chinh la so luong thanh phan lien thong tren do thi
//lien thong do thi chinh la khi lay 2 diem bat ki tren do thi luon co duong di
void connectedcomponent(int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			// tuc la no chua duoc tham 
			cnt++;
			dfs(i);//thang dfs nay se co tac dung loang ra het cac dinh va danh dau cac dinh do
			//da duoc tham roi
		}
	}
	cout<<cnt;
}
int main(){
	input();
	connectedcomponent(1);
}
