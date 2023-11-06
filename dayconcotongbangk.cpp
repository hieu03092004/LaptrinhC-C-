#include<bits/stdc++.h>
using namespace std;
int x[100],n,k,a[100];
vector<vector<int>>res;
vector<string>ans;
void xl(){
	vector<int>tmp;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			tmp.push_back(a[i]);
		}
	}
	res.push_back(tmp);
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)
			xl();
		else
			ql(i+1);
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];//xong co mang a[i] roi;
	}
	ql(1);
	int sum=0;
	bool check=true;
	for(vector<int>x:res){
		string tmp="";
		for(int y:x){
			sum+=y;
			tmp=tmp+to_string(y)+" ";
	}
		if(sum==k){
			check=false;
			tmp.erase(tmp.begin()+(tmp.size()-1));
			ans.push_back(tmp);
//			cout<<"["<<tmp<<"]"<<endl;
		}
		sum=0;
	}
	if(check)
		cout<<"-1";
	sort(ans.begin(),ans.end());
	for(string x:ans){
	cout<<"["<<x<<"]"<<endl;
	}	
}

