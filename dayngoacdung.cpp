#include<bits/stdc++.h>
using namespace std;
int x[100],n;
vector<string>res;
bool check(string s){
	stack<char>st;
	for(char x:s){
		if(x=='(')
			st.push(x);
		else{
			if(st.empty())
				return false;
			st.pop();
		}
	}
	return st.empty();
}
void xl(){
	string s="";
	for(int i=1;i<=n;i++){
		if(x[i]==0){
			s+="(";
		}
		else
			s+=")";
	}
	res.push_back(s);
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
	int cnt=0;
	cin>>n;
	ql(1);
	for(auto it:res){
		if(check(it)){
			cout<<it<<endl;
			cnt++;
		}
	}
	cout<<cnt;
}
