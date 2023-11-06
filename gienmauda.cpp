#include<bits/stdc++.h>
using namespace std;
pair<string,string>p;
int n;
int x[50];
//xay dung tu 1
set<string>se;
void xuly(){
	string res="";
	string s=p.first;
	string t=p.second;
	for(int i=1;i<=n;i++){
		if(x[i]==0)
			res+=s[i];
		else
			res+=t[i];
	}
	se.insert(res);
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)
			xuly();
		else
			ql(i+1);
	}
}

int main(){
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	s=" "+s;
	string t;
	getline(cin,t);
	t=" "+t;
	p=make_pair(s,t);
	ql(1);
	cout<<se.size()<<endl;
	for(string x:se)
		cout<<x<<endl;
}
