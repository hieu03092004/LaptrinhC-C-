#include<bits/stdc++.h>
using namespace std;
int n,k,x[100];
vector<vector<int>>res;
void xl(){
	int sum=0;
	vector<int>tmp;
	for(int i=1;i<=k;i++){
		sum+=x[i];
		tmp.push_back(x[i]);
	}
	if(sum==n)
		res.push_back(tmp);
}
void ql(int i){
	for(int j=x[i-1]+1;j<=9;j++){
		x[i]=j;
		if(i==k)
			xl();
		else
			ql(i+1);
	}
}
void in(vector<int>y){
	for(int i=0;i<y.size();i++){
		if(i!=y.size()-1){
			cout<<y[i]<<" "<<"+"<<" ";
		}
		else
			cout<<y[i];
	}
}
int main(){
	cin>>n>>k;
	ql(1);
	if(res.size()!=0){
	for(vector<int>x:res){
		in(x);
		cout<<endl;
		}
	}	
	else{
		cout<<"NOT FOUND";
	}
}


