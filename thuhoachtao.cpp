#include<bits/stdc++.h>
using namespace std;
pair<int,int>a[1006];
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,m,du,res=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second=2;
	}
	if(a[1].first<=m){
		du=0;
		res+=a[1].first;
		a[1].second--;
	}
	else{
		a[1].second--;
		res+=m;
		du=a[1].first-m;
	}
	for(int i=2;i<=n+1;i++){
		a[i-1].second--;
		int th;
		if(a[i].first+du<=m){
			 th=a[i].first+du;
			res+=th;
		}
		else{
			 th=m;
			 res+=th;
		}
		du=a[i].first+du-th;
		if(a[i-1].second==0 && du>0)
			du=0;
//		cout<<i<<" "<<du<<endl;
	}
	cout<<res;
}
