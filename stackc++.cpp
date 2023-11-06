#include<bits/stdc++.h>
#include<stack>
using namespace std;
//push day 1 phan tu vao trong ngan xep
//pop rut 1 phan tu ra ngoai ngan xep
// top lay phan tu tu dinh ngan xep
//empty de coi thu trong ngan xep co rong ha ko
//size dung de kiem tra trong stack co bao nhieu phan tu
int main(){
//	stack<int>st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	cout<<st.top();
int n;cin>>n;
stack<int>st;
while(n!=0){
	st.push(n%2);
	n/=2;
}
while(!st.empty()){
	cout<<st.top();
	// xoa no di
	st.pop();
}
	return 0;
}
