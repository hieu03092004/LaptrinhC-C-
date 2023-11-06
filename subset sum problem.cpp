#include<bits/stdc++.h>
using namespace std;
int n,a[100],x[100];//de luu cau hinh
bool check1=false;
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			int sum1=0,sum2=0;
			for(int k=1;k<=n;k++){
				if(x[k]==0)
					sum1+=a[k];
				else
					sum2+=a[k];
			}
				if(sum1==sum2)
					check1=true;
				return;
			}
		else
			ql(i+1);
		}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ql(1);
	if(check1)
		cout<<"1";
	else
		cout<<"0";
}
