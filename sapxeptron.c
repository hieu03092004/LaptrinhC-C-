#include<stdio.h>
#include<math.h>
//thao tac tron
// tron cac phan tu tu l=>m va tu m+1>=r thanh cac phan tu tang dan
void tron(int a[],int l,int m,int r){
int n1=m-l+1,n2=r-m;
int x[n1],y[n2];
// luu cac phan tu l cho toi m vao 1 mang x
for(int i=0;i<n1;i++){
	x[i]=a[l+i];
}
//luu cac phan tu m+1 cho toi r vao 1 mang y
for(int i=0;i<n2;i++){
	y[i]=a[m+1+i];
}
//sau do tron 2 mang x y va gan cho mang a co chi so tu l cho toi r
int index=l,i=0,j=0;
while(i<n1&&j<n2){
	if(x[i]<=y[j]){
		a[index++]=x[i++];
	}
	else{
		a[index++]=y[j++];
	}
		}	
	while(i<n1){
		a[index++]=x[i++];
	}
	while(j<n2){
		a[index++]=y[j++];
	}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);//loi goi de quy ben trai
		mergesort(a,m+1,r);//loi goi de quy ben phai
		tron(a,l,m,r);
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
	
	return 0;
}
