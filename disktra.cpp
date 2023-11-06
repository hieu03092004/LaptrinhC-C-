#include<bits/stdc++.h>
using namespace std;
//n la so dinh m la so canh
// pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>pi
int n,m;
vector<pair<int,int>>adj[10006];
//tao 1 cai mang d de luu chi phi duong di
//code lai cho nho
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back({y,z});
//		adj[y].push_back({x,z});
	}
}
void djstra(int s){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	vector<int>d(n+1,1e9);
	d[s]=0;
	q.push({0,s});
	while(!q.empty()){
		auto it=q.top();
		q.pop();
		//lay thang o dau hang doi uu tien ra
		int u=it.second;
		int kc=it.first;
		if(kc >d[u])
			continue;
		//duyet danh sach ke cua dinh u
		for(auto e:adj[u]){
			//dinh v
			int v=e.first;
			int w=e.second;
			if(d[v]>d[u]+w){
			//relaxation
			d[v]=d[u]+w;
			q.push({d[v],v});
			}
		} 
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
}
int main(){
	nhap();
	djstra(1);
}
