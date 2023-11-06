#include<bits/stdc++.h>
using namespace std;
// bien doi tu bieu thuc trung to sang hau to
int pre(char x){
	if(x=='+'|| x=='-')
		return 1;
	else if(x=='*'|| x=='/')
		return 2;
	return 0;
}
void solve(string s){
	//mot cai string res de luu ket qua
	stack<char>st;
	string res="";
	for(char x:s){
		if(x=='(')
			st.push(x);
		else if(isalpha(x)){
			string t=x+" ";
			res+=t;
		}
		else if(x==')'){
			while(st.top()!='('){
				string t=st.top()+" ";
				res+=t;
				st.pop();
			}
			//xoa dau mo ngoac tuong ung di
			st.pop();
		}
		else{
			while(!st.empty()&&pre(st.top())>=pre(x)){
				//pop cac toan tu ra
				string t=x+" ";
				res+=t;
				st.pop();
			}
			//sau do minh se day toan tu dang xet vao
			st.push(x);
		}
	}
	while(!st.empty()){
		string t=st.top()+" ";
		res+=t;
		st.pop();
	}
//	res.erase(res.size()-1,1);
	cout<<res;
}
int main(){
	string s;
	getline(cin,s);
	solve(s);
}
