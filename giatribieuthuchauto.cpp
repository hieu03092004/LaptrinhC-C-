#include<bits/stdc++.h>
using namespace std;
//tinh toan gia tri bieu thuc hau to
void solve(vector<string>v){
	stack<long long>st;
	for(string x:v){
		if(x!="*" && x!= "/" && x!="+" && x!="-"){
			//tuc la no la so
			st.push(stoll(x));
		}
		else if(x!=" "){
			long long  a=st.top();
			st.pop();
			long long b=st.top();
			st.pop();
			if(x=="*") st.push(b*a);
			if(x=="+") st.push(b+a);
			if(x== "-") st.push(b-a);
			if(x== "/") st.push(b/a);
 		}
	}
	cout<<st.top();
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	getline(cin,s);
	vector<string>v;
	int cnt=0;
	bool check=false;
	for(int i=0;i<s.size();i++){
		if(s[i]==' ')
			check=true;
	}
	if(check){
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			v.push_back(s.substr(i-cnt,cnt));
			cnt=0;
		}
		else if(i==s.size()-1)
			v.push_back(s.substr(i,1));
		else
			cnt++;
	}
	 solve(v);
	 return 0;
	}
	cout<<s;
}
