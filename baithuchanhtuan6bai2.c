#include<stdio.h>
#include<math.h>
// n>=2// m<=20
// n la so hang m la so cot
void nhap(int a[][20],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][20],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
// tinh tong cot dau tien
int sum(int a[][20],int n,int m){
	int sum=0,j=0;
	for(int i=0;i<n;i++){
		sum+=a[i][j];
	}
	return sum;
} 
//int tong(int a[],int n)
// tim phan tu nho nhat tren dong cuoi cung
int min(int a[][20],int n,int m){
	int j=n-1; // hang se la thang co dinh
	int min=1e9;
	for(int i=0;i<m;i++){
		min=fmin(a[j][i],min);
	}
	return min;
}
int main(){
	int n,m;
	do{
		printf("Nhap n va m");
		scanf("%d%d",&n,&m);
	}
	while(n<2||m>20);
	int a[n][20];
	nhap(a,n,m);
//	in(a,n,m);
//	printf("%d",sum(a,n,m));
	printf("%d",min(a,n,m));
}
