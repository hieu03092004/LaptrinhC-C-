#include<bits/stdc++.h>
using namespace std;
int x[100],n,k,s,res=0,cnt=0;
bool used[100];
vector<vector<int>>res1;
void xl1(){
	vector<int>tmp;
	for(int i=1;i<=k;i++){
			tmp.push_back(x[i]);
	}
	res1.push_back(tmp);
}
void ql(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		if(!used[j]){
			x[i]=j;
			used[j]=true;
		if(i==k){
			xl1();
		}
		else
			ql(i+1);
		used[j]=false;
		}
	}
}
int main(){
	cin>>n>>k>>s;
	ql(1);
	for(vector<int>v:res1){
		//hieu moi phan tu trong mang res cua minh la 1 vector
		for(int x:v){
			res+=x;
		}
		if(res==s){
			cnt++;
		}
		res=0;
	}
	cout<<cnt;
}
