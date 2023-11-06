#include<stdio.h>
#include<math.h>
//viet ham xu ly voi con con tro
//1 nhap mang so nguyen voi n phan tu
void nhap(int a[],int &n){
		do{
		printf("nhap n");
		scanf("%d",&n);
	}
	while(n<2||n>50);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void in(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d ",*(a+i));
}
// chen gia tri x vao vi tri y su dung con tro
 void chen(int a[],int *n,int x,int y){
	for(int i=*n-1;i>=y-1;i--){
		a[i+1]=a[i];// tu tuong la dich cac phan tu qua tu vi tri y-1 sang ben phai
	}
	y--;
	a[y]=x;
	*n=*n+1;
}
//void in(int a[],int *n){
//	for(int i=0;i<*n;i++)
//		printf("%d ",*(a+i));
//}
// sap xep tang dan 
int cmp(const void*a,const void*b){
	int *x=(int*)a;
	int *y=(int*)b;
	//truoc be hon sau
	return *x-*y;
}
// sap xep giam dan
int cmp1(const void*a,const void*b){
	int*x=(int*)a;
	int *y=(int*)b;
	return *y-*x;
}
//xoa phan tu tai vi tri y
void xoa(int a[],int *n,int y){
	for(int i=y-1;i<*n-1;i++){
		a[i]=a[i+1];// ban chat la cho gan de len dich cac phan tu qua ben trai
	}
	*n=*n-1;
}
// xoa cac phan tu la so nguyen to trong mang
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
// xoa cac phan tu trong mang la so nguyen to
 void xoant(int a[],int *n){
	for(int i=*n-1;i>=0;i--){
		if(nt(a[i])){
			for(int j=i;j<*n-1;j++){
				a[j]=a[j+1];
			}
			*n=*n-1;
		}
			
	}
}

int main(){
	int a[n],n;
	nhap(a,n);
//	int x,y;scanf("%d%d",&x,&y);
//	chen(a,&n,x,y);
////	printf("%d",n);
//	xoa(a,&n,2);
//	printf("%d",n)
//	xoant(a,&n);
	in(a,n);
}

