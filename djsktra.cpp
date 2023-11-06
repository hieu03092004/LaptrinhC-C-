#include<bits/stdc++.h>
using namespace std;
 const int maxn=1001;
using ll=long long;
vector<pair<int,int>>adj[maxn];
//de dinh ke va trong so;
int n,m,s,t;//n la so dinh m la so canh
//thuat toan dijisktra dung de luu tim duong di ngan nhat tu 1 dinh den tat cac moi dinh cua do thi
int parent[maxn];
void nhap(){
	cin>>n>>m>>s>>t;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
//		adj[y].push_back({x,w});
	}
}
const int INF=1e9;
void djsktra(int s,int t){
	vector<ll>d(n+1,INF);
	d[s]=0;
	//khoang cach tu s toi chinh no la bang 0
	//vector d de luu khoang cach tu dinh bat dau den n dinh
	priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>q;
	//{khoang cach,dinh)
	q.push({d[s],s});
	while(!q.empty()){
		pair<int,int>top=q.top();q.pop();
		//chon ra dinh co khoang cach nho nhat;
		int kc=top.first;
		int u=top.second;
		if(kc>d[u])continue;
		for(pair<int,int>it: adj[u]){
			//duyet cac danh sach ke cua dinh u
			int v=it.first;//day la dinh co khoang cach tu u toi v
			int w=it.second;//day la chieu dai cua 2 dinh u v
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v],v});
				parent[v]=u;
				//cap nhat va day vao trong hang doi uu tien
			}
		}
	}
	cout<<d[t]<<endl;
	vector<int>path;//de truy vet duong di
	while(1){
		path.push_back(t);
		if(t==s)break;
		t=parent[t];///de truy vet nguoc lai;
	}
//chinh la duong di nho nhat tu dinh s toi dinh t
	reverse(path.begin(),path.end());
	for(auto x:path){
		cout<<x<<" ";
	}
}
int main(){
	nhap();
	djsktra(s,t);
}
