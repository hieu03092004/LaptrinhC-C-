#include<bits/stdc++.h>
using namespace std;
int n,s,a[100],x[100],res=1e9;
bool check=true;
void xl(){
	vector<int>tmp;
	for(int i=1;i<=n;i++){
		if(x[i]==1)
			tmp.push_back(a[i]);
	}
	long long sum=0;
	for(int x:tmp)
		sum+=x;
	if(sum==s){
		if(res>tmp.size())
			res=tmp.size();
		check=false;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
	if(i==n)xl();
	else
		ql(i+1);//tan cong toi cau hinh tiep theo
	}
}
int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(1);
	if(!check)
		cout<<res;
	else
		cout<<"-1";
	return 0;
}
