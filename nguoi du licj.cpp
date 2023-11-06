#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],x[100];
bool used[100];// de danh dau xem cac thanh pho da duoc duyet qua chua
int dis=0,res=1e9;
int cmin=1e9;
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			x[i]=j;
			used[j]=true;//danh dau la j da duoc tham
			dis+=a[x[i-1]][x[i]];
		if(i==n)
			res=min(res,dis+a[x[n]][1]);
		else if(dis+(n-i+1)*cmin<res){
			ql(i+1);
			}
			used[j]=false;
			dis-=a[x[i-1]][x[i]];
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j])cmin=min(cmin,a[i][j]);
		}
	}
	x[1]=1;
	used[1]=true;//danh dau la thanh pho 1 da duoc tham roi
	// boi vi luc no back track no co the quay lai 1
	ql(2);
	cout<<res;
}
