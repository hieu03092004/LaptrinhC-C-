#include<bits/stdc++.h>
using namespace std;
int x[1005],n;
bool used[1005];
set<string>se;
string s;
void xl(){
	string res="";
	for(int i=1;i<=n;i++){
		res+=s[x[i]];
	}
//	cout<<endl;
//	cout<<res<<endl;
	se.insert(res);
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			x[i]=j;
			used[j]=true;
		if(i==n){
			xl();
		}
		else
			ql(i+1);
			used[j]=false;
		}
	}
}
int main(){
	getline(cin,s);
	n=s.size();
	s=" "+s;
	ql(1);
//	cout<<se.size();
	for(string x:se)
		cout<<x<<endl;
}
