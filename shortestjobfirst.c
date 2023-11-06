#include<bits/stdc++.h>
using namespace std;
int main(){
	//dung stack de doi so n sang nhi phan
	stack<int>st;
	int n;cin>>n;
	while(n){
		int r=n%2;
		st.push(r);
		n/=2;
	}
	while(!st.empty(){
		int top=st.front();
		cout<<top;
		st.pop()// xoa khoi dinh hang doi
}
	return 0;
}

