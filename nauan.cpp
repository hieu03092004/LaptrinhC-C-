#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>v[200000];
vector<int>res;
int a[200000];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=a[1];i++){
		v[1].push_back(i);
	}
//	for(auto it:v[1])
//	cout<<it<<" ";
	//xay dung tu thang thu 2 cho toi n
	int current=a[1];
	for(int i=2;i<=n;i++){
		int j;
		for(j=current+1;j<=current+a[i];j++){
			v[i].push_back(j);
//			cout<<j<<" ";
		}
		current=j-1;
	}
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<v[i].size();j++){
//			cout<<v[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cin>>m;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		for(int j=1;j<=n;j++){
			if(binary_search(v[j].begin(),v[j].end(),x))
			{
				res.push_back(j);
			}
		}
	}
	for(int x:res){
		cout<<x<<" ";
	}	
}
