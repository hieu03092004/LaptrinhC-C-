#include<stdio.h>
#include<math.h>
//sap xep chon:selection sort
// do phuc tap:0(N^2)
// O moi buoc se dua phan tu nho nhat  chua duoc sap xep ve dau day
// giup sap xep mot mang tang dan ha giam dan
void selectionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		//di tim phan tu nho nhat chua duoc sap xep
		int min_post=i;//coi phan tu trong mang dau tien la nho nhat
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_post]){
				j=min_post;
			}
		}
		int tmp=a[i];a[i]=a[min_post];a[min_post]=tmp;
	}//hoan doi gia tri cua hai phan tu voi nhau
}
//thuat toan sap xep noi bot
//tu tuong dua phan tu lon nhat chua duoc sap xep ra cuoi day
//O(N^2)
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		//duyet tu chi so j=0 den j=n-i-2
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){//neu phan tu o sau lon hon phan tu o truoc
			// thi doi cho phan tu o truoc vs phan tu o sau
			int tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
			}
			
		}
	}
}
//thuat toan sap xep chen:insertion sort
//O(N^2)
//tu tuong o moi buoc se chen phan tu dang xet vao day cac phan tu da duoc sap xep truoc do
//sap xep tang dan 
void insertionsort(int a[],int n){
	for(int i=1;i<n;i++){
		int post=i-1,value=a[i];
		while(post>=0 && value>a[post]){
			a[post+1]=a[post];//cau lenh nay co y nghia dich phan tu qua ben tay phai 1dv
			--post;
		}
		a[post+1]=value;	
	}
}
//sap xep chen mergesort
//O(Nlogn)
void merge(int a[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	int x[n1],y[n2];
// luu cac phan tu l cho toi m vao mang x
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
// luu cac phan tu tu m+1 cho toi r vao mang y
	for(int i=0;i<n2;i++){
		y[i]=a[m+i+1];
	}
// sau do tron hai mang x va y va luu lai vao trong mang a
int index=l,i=0,j=0;
while(i<n1 && j<n2)
{
	if(x[i]<y[j]){
		a[index++]=x[i++];
	}
	else{
		a[index++]=y[j++];
	}
}
// vot not cac phan tu trong mang ra
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
		mergesort(a,l,m);
		//loi goi de quy ben trai
		mergesort(a,m+1,r);
		//loi goi de quy ben phai
		//sau khi x r ms bat dau tron 2 mang vs nhau
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
