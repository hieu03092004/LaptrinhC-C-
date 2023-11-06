#include<stdio.h>
#include<math.h>
// viet ham nhap va xuat ma tran vuong
void Nhap(int a[][10],int&n,int&m){
	do{
		printf("Nhap n");
		scanf("%d",&n);
	}
	while(n<2||n>10);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void In(int a[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
// tim phan tu lon nhat tren duong cheo chinh
int Max(int a[][10],int n,int m){
	int max=-1e9;
	
	for(int i=0;i<n;i++){
		max=fmax(a[i][i],max);
	}
	return max;
}
void InCC(int a[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){
			printf("%d")
		}
	}
}
int main(){
	int n;
	int a[n][10];
	Nhap(a,n,n);
//	In(a,n,n);
	printf("%d",Max(a,n,n));
}
