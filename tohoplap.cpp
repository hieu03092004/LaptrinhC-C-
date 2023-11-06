//11
//12
//13
//14
//22
//23
//24
//33
//34
//44
//to hop la no khong xet thu tu
#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,x[100];
string s;
vector<vector<int>>res;//thang nay de luu ket qua
void xl(){
	vector<int>tmp;
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			cnt++;
			tmp.push_back(a[i]);
		}
	}
	if(cnt==k)
		res.push_back(tmp);
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)
			xl();
		else{
			ql(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	cin.ignore();
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		a[i+1]=s[i]-'A'+1;
	}
	ql(1);
	for(auto x:res){
		for(int y:x)
			cout<<y;
		cout<<endl;
	}
	//tu da lam tung buoc
}
