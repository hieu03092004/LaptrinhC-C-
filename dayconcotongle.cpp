#include<bits/stdc++.h>
using namespace std;
int n,a[100],x[100];
vector<vector<string>>res;//thang nay de luu ket qua
void xl(){
	vector<string>tmp;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			tmp.push_back(to_string(a[i]));
			sum+=a[i];
		}
	}
	if(sum%2!=0)//tuc la no co tong le
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
void in(string x){
	for(int i=0;i<x.size();i++){
		if(i!=x.size()-1)
			cout<<x[i]<<" ";
		else
			cout<<x[i];
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(1);
	sort(res.begin(),res.end());
	for(vector<string>x:res){
		for(string y:x)
			in(y);
		cout<<endl;
	}	
}
