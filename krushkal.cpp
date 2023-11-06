#include<bits/stdc++.h>
using namespace std;
int n,m,parent[100];
struct edge{
	int u,v,w;
};
vector<edge>canh;
void inp(){
	cin>>n>>m;
	// n la so dinh m la danh sach canh
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		edge e;
		e.u=x;
		e.v=y;
		e.w=z;
		canh.push_back(e);
	}
}
void make_set(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		//cho cac dinh cua do thi co cha dai dien la chinh no
	}
}
int find(int v){
	if(v==parent[v])
		return v;//tuc la no dang dai dien cho chinh no no nam o 1 tap hop rieng
	return find(parent[v]);//tim thang dai dien cho no
		//tuc la no 
}
bool uni(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b)
		//tuc la gop duoc
	return true;
	return false;
}
bool cmp(edge a,edge b){
	return a.w<b.w;
}
void kruskal(){
	vector<edge>mst;
	int d=0;
	sort(canh.begin(),canh.end(),cmp);
	for(int i=0;i<m;i++){
		if(mst.size()==n-1)break;
		edge e=canh[i];
		if(uni(e.u,e.v)){
			mst.push_back(e);
			d+=e.w;
		}
	}
	if(mst.size()!=n-1)
		cout<<"Do thi khong lien thong";
	else{
		for(auto it:mst){
			cout<<it.u<<it.w<<endl;
		}
		cout<<"MST"<<d;
	}
}
int main(){
	inp();
	make_set();
	kruskal();
}
