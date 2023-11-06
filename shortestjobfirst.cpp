#include<bits/stdc++.h>
using namespace std;
int main(){
	//dung stack de doi so n sang nhi phan
	stack<int>st;
	int n;cin>>n;
	while(n){
		int r=n%16;
		st.push(r);
		n/=16;
	}
	while(!st.empty()){
		int top=st.top();// lon qua kiu
		if(top>=10)
		cout<<char(top+55);
		else
			cout<<top;
		st.pop();// xoa khoi dinh hang doi
}
	return 0;
}

