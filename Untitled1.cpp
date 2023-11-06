#include<bits/stdc++.h>
using namespace std;
int Findmin(int a[],int n,bool &check,int min){
	if(n==-1 && !check)
		return-1;
	if(n==-1)
		return min;
	if(a[n]>0){
		check=true;
		min=a[n];
	}
	if(a[n]>0 && a[n]<min){	
		min=a[n];
	}
	return Findmin(a,n-1,check,min);
}

int main(){
	int a[4]={0,-0,-1,-1};
	int n=sizeof(a)/sizeof(a[0]);
	bool check=false;
	int min;
	cout<<Findmin(a,n-1,check,min)<<endl;
	cout<<check;
}
