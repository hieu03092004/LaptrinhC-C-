#include<bits/stdc++.h>
#include<stack>
using namespace std;
//push day 1 phan tu vao trong ngan xep
//pop rut 1 phan tu ra ngoai ngan xep
// top lay phan tu tu dinh ngan xep
//empty de coi thu trong ngan xep co rong ha ko
//
int main(){
//	stack<int>st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	cout<<st.top;
// bai toan dau tien chuyen he thap phan sang he nhi phan
	int n;cin>>n;
	stack<int>st;// stack<kieu du lieu>ten;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty){
	//de kiem tra xem trong bo nho stack cua minh co rong ko
	cout<<st.top();
	st.pop();
	}
	return 0;
}
