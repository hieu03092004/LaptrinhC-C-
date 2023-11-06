#include<stdio.h>
//cac bien the cua thuat toan tim kiem nhi phan
//1 tim vi tri xuat hien dau tien cua x trong mang da duoc sap xep
int firstpos(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;// chua ket luan voi tim xem ben trai
			r=m-1;
		}
		//neu khong tim thay thi van tim o hai ben
		else if(a[m]<x){
			//tim ben phai
			l=m+1;
		}
		else{
			//tim ben trai
			r=m-1;
		}
	}
	return res;
}
//2 tim vi tri cuoi cua x trong 1 mang da duoc sap xep
int lastpos(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			//tim ben phai
			l=m+1;
		}
		//neu khong tim thay thi tim ben phai va ben trai nhu thuat toan tim kiep
		else if(a[m]<x){
			//tim ben phai
			l=m+1;
		}
		else{
			//tim ben trai
			r=m-1;
		}
	}
	return res;
}
//Tìm vi tri dau tien cua phan tu lon hon bang x trong mang da duoc sap xep
int first(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>=x){
			res=m;
			// tim ben trai de co vi tri tot hon
			r=m-1;
		}
		else{
			//tim ben phai
			l=m+1;
		}
	}
	return res;
}
//4 tim vi tri cuoi cung cua phan tu nho hon hoac bang x
int last(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=x){
			res=m;
			// tim ben phai xem co vi tri tot hon khong
			l=m+1;
		}
		else{
			//tim ben trai 
			r=m-1;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// goi ham thoi
}
