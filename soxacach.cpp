#include<bits/stdc++.h>
using namespace std;
// ban chat bai nay la sinh hoan vi
int n,used[100],x[100];
bool check(){
	for(int i=2;i<=n;i++){
		if(abs(x[i]-x[i-1])==1)
			return false;
	}
	return true;
}
void in(){
	for(int i=1;i<=n;i++)
		cout<<x[i];
	cout<<endl;
}
void ql(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			x[i]=j;
			used[j]=1;
		if(i==n){
			if(check())
			in();
		}
		else{
			ql(i+1);
			}
			used[j]=0;
		}
	}
}
int main(){
	cin>>n;
	ql(1);
}
