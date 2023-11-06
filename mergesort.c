#include<stdio.h>
//sap xep tron mergesort
//O(NlogN)
void merge(int a[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
int x[n1],y[n2];
//luu cac phan tu tu l cho toi m vao mang x
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
//luu cac phan tu tu m+1 cho toi r vao mang a
	for(int i=0;i<n2;i++){
		y[i]=a[m+i+1];
	}
//tron hai mang x va y va luu lai vao a[l,r]
int index=l,i=0,j=0;
	while(i<n1 &&j<n2 )
	{
		if(x[i]<=y[j]){
			a[index++]=x[i++];
		}
		else{
			a[index++]=y[j++];
		}
	}
// vot not cac phan tu lon con lai trong mang
	while(i<n1){
		a[index++]=x[i];
	}
	while(j<n2){
		a[index++]=y[j++];
	}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
	mergesort(a,l,m);
	//loi goi de quy ben trai
	mergesort(a,m+1,r);
	//loi goi de quy ben phai
	merge(a,l,m,r);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
