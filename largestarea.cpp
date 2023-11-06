#include<bits/stdc++.h>
using namespace std;
void smaller_left(int a[],int n,int L[]){
	stack<int>st;
	for(int i=n;i>=0;i--){
		while(!st.empty() &&  a[i]<a[st.top()]){
					L[st.top()]=i;
					st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		L[st.top()]=-1;
		st.pop();
	}	
}
void smaller_right(int a[],int n,int R[]){
	stack<int>st;
	for(int i=0;i<n;i++){
		while(!st.empty() &&  a[i]<a[st.top()]){
					R[st.top()]=i;
					st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		R[st.top()]=n;
		st.pop();
	}	
} 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int a[n],L[n],R[n];
	for(int &x:a)cin>>x;
	smaller_left(a,n,L);
	smaller_right(a,n,R);
}