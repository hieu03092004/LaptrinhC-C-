#include<bits/stdc++.h>
using namespace std;
int a[]={1000,500,200,100,50,20,10,5,2,1};
int main(){
	int n,res=0;
	cin>>n;
	for(int i=0;i<10;i++){
		int r=n/a[i];
		n=n-r*a[i];
		res+=r;
	}
	cout<<res;
}
