#include<bits/stdc++.h>
using namespace std;
//euler cycle
int n,m;//n la so dinh m la so canh
set<int>adj[1001];
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].insert(y);
		adj[y].insert(x);
	}
}
void ec(int u){
	stack<int>st;
	st.push(u);
	vector<int>EC;
	while(!st.empty()){
		//tuc stack con khac rong
		int v=st.top();
		if(adj[v].size()!=0){
			int x=*adj[v].begin();
			st.push(x);//day x vao trong stack
			// xoa canh
			adj[v].erase(x);
			adj[x].erase(v);
		}
		else{
			st.pop();
			EC.push_back(v);
		}	
	}
	// sau vong while nay ket thuc
	reverse(EC.begin(),EC.end());
	for(int x:EC)
		cout<<x<<" ";
}
int main(){
	nhap();
	ec(1);
}
