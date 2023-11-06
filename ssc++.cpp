#include<bits/stdc++.h>
using namespace std;
//selection sort
// tu tuong la cac thang o sau
// dua thang nho nhat hoac lon nhat ra dau day
// sap xep theo chieu tang
void ss(int a[],int n){
	for(int i=0;i<=n-2;i++){
		int pos=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[j]<a[pos])
				pos=j;
		}
		swap(a[i],a[pos]);
	}	
}
// thuat toan bubble sort
// tu tuong la dua thang lon nhat hoac nho nhat ra cuoi da
void bs(int a[],int n){
	//sap xep tang dan tu tuong la dua thang lon nhat ra cuoi day
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-i-2;j++){
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
		}
	}
}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bs(a,n);
	for(int x:a){
		cout<<x<<" ";
	}
}
