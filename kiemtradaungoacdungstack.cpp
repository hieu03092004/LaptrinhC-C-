#include<bits/stdc++.h>
#include<stack>
using namespace std;
void solve(){
string s;
		cin>>s;
	stack<char>st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(')
			st.push(s[i]);
		else{
			if(st.empty()){// day la truong hop
				cout<<"INVALID"<<endl;
				return;// day la truong hop ko co ngoac  
			}
			else
			st.pop();//xoa phan tu o dau ngan xep
		}
	}
	if(st.empty())//neu cai xau la rong in ra invalid
		cout<<"VALID"<<endl;
	else
		cout<<"INVALID"<<endl;
}
int main(){
	int t;cin>>t;
	// t la so test case
	while(t--){
	solve();
}	
	return 0;
}
