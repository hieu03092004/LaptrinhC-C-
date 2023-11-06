#include<bits/stdc++.h>
using namespace std;
int n,m;
// n la so dinh cua do thi;
int parent[1005],sz[1005];
void init(){
	cin>>n>>m;
	//n la so dinh cua do thi
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=i;
	}
}
int Find(int u){
	if(u==parent[u])
		return u;
	else{
		//toi uu nen duong
		return parent[u]=Find(parent[u]);
	}
}
bool Union(int u,int v){
	//tim dai dien cua thang u
	//tim dai dien cua thang v
	u=Find(u);
	v=Find(v);
	if(u==v)
	//tuc no dai dien cho chinh no roi
	return false;
	else{
		if(sz[u]<sz[v])
			swap(u,v);
		//uu tien u la thang lon hon;
		sz[u]+=sz[v];
		parent[v]=u;
		return true;
	}
}
int main(){
	init();
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		Union(x,y);
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(i==parent[i])
			cnt++;
	}
	cout<<cnt;
}
