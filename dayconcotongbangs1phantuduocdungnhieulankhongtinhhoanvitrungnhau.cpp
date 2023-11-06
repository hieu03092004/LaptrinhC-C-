#include<bits/stdc++.h>
using namespace std;
int f[100];
int main(){
	int n,s;
	cin>>s>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	f[0]=1;
	//duoc phep dung a[i] nhieu lan nhung khong tinh hoan vi trung nhau
	for(int i=1;i<=n;i++){
		for(int j=1;j<=s;j++){
			if(j>=a[i])
				f[j]=f[j]+f[j-a[i]];
		}
	}
	cout<<f[s];	
}
