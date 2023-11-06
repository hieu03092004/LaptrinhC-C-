#include<bits/stdc++.h>
using namespace std;
int n,m;// n la so dinh m la so canh cau do thi
vector<int>adj[1001];
vector<int>r_adj[1001];//de luu ma tran transpoe cua do thi
bool visited[1001];
stack<int>st;
void input(){
	for(int i=1;i<=n;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
}
//viet ham dfs1 de thuc hien thuat toan sap xep topo
void dfs1(int u){
	visited[u]=true;
	for(int x:adj[u]){
		if(!visited[x])
			dfs1(x);
	}
	cout<<u<<" ";//de xem thu tu trong bo nho stack
	st.push(u);
}
void dfs2(int u){
	visited[u]=true;
	cout<<u<<" ";// de xem thu tu duyet cua no
	for(int x:r_adj[u]){
		if(!visited[x])
			dfs2(x);
	}
}
void ssc(){
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i])
			dfs1(i);
	}
	cout<<endl;
	int cnt=0;
	memset(visited,false,sizeof(visited));
	while(!st.empty()){
		int t=st.top();
		st.pop();
		if(!visited[t]){
			dfs2(t);
			cout<<endl;
			cnt++;
		}
	}
	cout<<cnt;
}
int main(){
	input();
	ssc();
}

