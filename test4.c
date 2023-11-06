#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
	// su dung do while de lam 
		for(int i=0;i<n;i++){
		do{
			printf("Nhap gia tri cho phan tu %d:\n",i+1);
			scanf("%d",a+i);
		}
		while(*(a+i)<=0);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
int main(){
	int n;
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<5||n>100);
	int a[n];
	nhap(a,n);
	in(a,n);
}
