#include<bits/stdc++.h>
using namespace std;
//bieu thuc tu tien to sang trung to
void solve(string s){
	stack<string>st;
	for(int i=s.size()-1;i>=0;i--){
		if(isalpha(s[i])){
			string th="";
			th+=s[i];
			st.push(th);
		}
		else{
			string th1=st.top();
			st.pop();
			string th2=st.top();
			st.pop();
			string e="("+ th1 +s[i] +th2 +")";
			st.push(e);
		}
	}
	cout<<st.top();
}
int main(){
	string s;
	getline(cin,s);
	solve(s);
}
