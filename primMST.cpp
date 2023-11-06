#include<bits/stdc++.h>
using namespace std;
int n,m;
struct canh{
	int x,y,w;
};
vector<pair<int,int>>adj[1000];
bool used[1000];
void nhap(){
	cin>>n>>m;
	//n la so dinh m la so canh
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		adj[x].push_back({y,z});
		adj[y].push_back({x,z});
	}
}
void prim(int u){
	vector<canh>MST;
	int d=0;//d la chieu dai cua cay khung
	used[u]=true;//dua dinh u va v mst
	while(MST.size()<n-1){
		//co n dinh thi cay khung cua minh se co n-1 canh
		int min=1e9;
		int X,Y;
		for(int i=1;i<=n;i++){
			if(used[i]){
				//nghia la no la cai dinh thuoc MST thi minh se duyet danh sach ke cua ni
				for(pair<int,int>it :adj[i]){
					int dinh=it.first;
					int trongso=it.second;
					if(!used[dinh]&&trongso<min){
						// nghia la dinh thuoc cay thuong
						min=trongso;
						X=dinh;Y=i;
					}
				}
			}
		}
		MST.push_back({X,Y,min});
		d+=min;
		used[X]=true;//xoa no khoi tap dinh v cua do thi ban dau
	}
	for(canh e:MST){
		cout<<e.x<<" "<<e.y<<" "<<e.w<<endl;
	}
	cout<<d;
}
int main(){
	nhap();
	prim(1);
}
