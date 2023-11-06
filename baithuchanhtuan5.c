#include<stdio.h>
#include<stdlib.h>
void nhap(int a[],int n){
for(int i=0;i<n;i++)
	scanf("%d",a+i);
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
// tim so nguyen am lon nhat
int check(int a[],int n){
	int check=0,max=0;
	for(int i=0;i<n;i++){
		a[i]=max;
		if((a[i]<0)&&(a[i]>max)){
			max=a[i];
			check=1;
		}
	}
	if(check){
		return max;
	}
	else
	return 0;
}
// ham sap xep cac so nguyen am theo thu tu tang dan
// xay dung hai ham r
// mang chua so nguyen am
int cmp(const void*a,const void*b){
	// ep hai con tro kieu void sang kieu int
	int *x=(int*)a;
	int *y=(int *)b;
	return *x-*y;
}
int cmp1(const void*a,const void*b){
	int *x=(int*)a;
	int *y=(int *)b;
	return *y-*x;
}
void sapxep(int a[],int n){
	int dem=0,dem1=0,b[100],c[100];
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[dem]=a[i];
			dem++;
		}
		else{
			c[dem1]=a[i];
			dem1++;
		}
	}
	qsort(b,dem,sizeof(int),cmp);
	for(int i=0;i<dem;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	qsort(c,dem1,sizeof(int),cmp1);
	for(int i=0;i<dem1;i++){
		printf("%d ",c[i]);
	}
}
//tach 2 mang ra 1 mang la so duong mot mang la so am
void tach(int a[],int n){
	int dem=0,dem1=0,b[100],c[100];
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[dem]=a[i];
			dem++;
		}
		else{
			c[dem1]=a[i];
			dem1++;
		}
	}
	for(int i=0;i<dem;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=0;i<dem1;i++){
		printf("%d ",c[i]);
	}
}
void change(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]<0)
			a[i]=-1;
		else
			a[i]=1;
	}
}
int main(){
	int n,a[n];
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}
	while(n<3||n>100);
	nhap(a,n);
//	sapxep(a,n);
//	tach(a,n);
	change(a,n);
	in(a,n);
}
