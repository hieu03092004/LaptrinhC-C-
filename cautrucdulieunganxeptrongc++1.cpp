#include<bits/stdc++.h>
#include<stack>
using namespace std;
//push day 1 phan tu vao trong ngan xep
//pop rut 1 phan tu ra ngoai ngan xep
// top lay phan tu tu dinh ngan xep
//empty de coi thu trong ngan xep co rong ha ko
//lifo:last in first out
int main(){
//	stack<int>st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	cout<<st.top;
//	in ra cac tu theo thu tu nguoc lai
	string s;
	getline(cin,s);//cin nguon la nhap tu ban phim s la xau s
	stringstream ss(s);
	string token;
	stack<string>st;
	while(ss>>token){
		st.push(token);
	}
	while(!st.empty()){
		cout<<st.top()<<endl;
		// sau do phai dua phan tu do ra
		st.pop();
	}
}
