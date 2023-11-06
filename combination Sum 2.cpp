#include<bits/stdc++.h>
using namespace std;
int n,k,x[100];
vector<vector<int>>res;
int used[505];
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
void xl(){
	int sum=0;
	vector<int>tmp;
	for(int i=1;i<=k;i++){
		sum+=x[i];
		if(nt(x[i]));
		tmp.push_back(x[i]);
	}
	if(sum==n)
		res.push_back(tmp);
}
void ql(int i){
	for(int j=x[i-1]+1;j<=n;j++){
		if(used[j]==2){
		x[i]=j;
		used[j]=1;//danh dau j da duoc su dung roi
		if(i==k)
			xl();
		else
			ql(i+1);
			used[j]=2;
		}
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
	// danh dau cac so nguyen 500 bang
	for(int i=1;i<=500;i++){
		if(nt(i))
			used[i]=2;
	}
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
	return 0;
}
