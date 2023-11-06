#include<bits/stdc++.h>
using namespace std;
// maximum sliding window
int main(){
	int n,k;
	int a[n];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long sum=0;
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	long long res=sum,pos=0;//lay pos la vi tri cua phan tu dau tien
	for(int i=k;i<=n-1;i++){
		sum=sum-a[i-k]+a[i];
		if(sum>=res){
			res=sum;
			pos=i-k+1;
		}
	}
	cout<<res<<endl;
	for(int i=0;i<k;i++){
		cout<<a[pos+i]<<" ";
	}
}
