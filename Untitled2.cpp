#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0,sum=0;
	cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	for(int i=0;i<n;i++)
		sum+=a[i];
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int tmp=a[i]+a[j];
			if((sum-tmp)%2==0)
				cnt++;
		}
	}
	cout<<cnt;
}
