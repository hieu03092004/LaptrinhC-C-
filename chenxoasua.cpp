#include<stdio.h>
#include<math.h>
//viet ham chen xoa
//xoa truoc ik
void nhap(int a[],int &n){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xoa(int a[],int *n,int k){
	//xoa tai vi tri k 
	for(int i=k-1;i<=*n-2;i++){
		a[i]=a[i+1];
	}
	*n=*n-1;
}
//ham chen
void chen(int a[],int *n,int x,int k){
	// tu tuong la dich cac phan tu sang ben phai vi tri k
	for(int i=*n-1;i>=k-1;i--){
		a[i+1]=a[i];
	}
	a[k-1]=x;
	*n=*n+1;
}
// xoa cac phan tu la so nguyen to trong mang
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
//xoa nt
void xoant(int a[],int *n){
	//code theo kieu duyet tu cuoi ve
	for(int i=*n-1;i>=0;i--){
		if(nt(a[i])){
			for(int j=i;j<=*n-2;j++){
				a[j]=a[j+1];
			}
			*n=*n-1;
		}
	}
}
// chuyen cac gia tri trong mang la so nguyen to thanh 1
void chuyen(int a[],int n){
	for(int i=0;i<n;i++){
		if(nt(a[i]))
			a[i]=1;
	}
}
int main(){
	
//	float res=0,tmp=0;
//	scanf("%d",&n);
//	for(int i=0;i<=n;i++){
//		tmp+=i;
//		res+=sqrt(tmp);
//	}
//	printf("%.2f",res);
	
	int n,a[n];
	nhap(a,n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	chuyen(a,n);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
	xoa(a,&n,2);
	chen(a,&n,3,2);
	xoant(a,&n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
