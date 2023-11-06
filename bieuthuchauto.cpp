#include<bits/stdc++.h>
using namespace std;
void solve(string s){
	stack<int>st;
	for(int i=s.size()-1;i>=0;i--){
		if(isdigit(s[i]))
			st.push(s[i]-'0');
		else if(s[i]!=' '){
			int o1=st.top();
			st.pop();
			int o2=st.top();
			st.pop();
			if(s[i]=='+')
				st.push(o1+o2);
			else if(s[i]=='-')
				st.push(o1-o2);
			else if(s[i]=='*')
				st.push(o1*o2);
			else
				st.push(o1/o2);
		}	
	}
	cout<<st.top();
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	solve("2 3 4 + * 5 - 2 2 * +");
}