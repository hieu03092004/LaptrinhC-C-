#include<bits/stdc++.h>
using namespace std;
int n,a[105],k,x[105];
void in(){
	for(int i=1;i<=n;i++){
		if(x[i]==1)
			cout<<a[i];
	}
	cout<<endl;
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			in();
		}
		else{
			ql(i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
		sum+=a[i];
	if(sum%a[i]==0)
		cout<<1;

}
