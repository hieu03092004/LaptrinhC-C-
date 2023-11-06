#include<stdio.h>
#include<math.h>
void nhap(int a[][30],int n,int m){
	// co ma tran a co n hang va m cot roi 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][30],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void inchan(int a[][30],int n,int m){
	// duyet tu dau toi cuoi mang
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]%2==0){
					printf("%d ",a[i][j]);
				}
			}
			//printf("\n");
		}
}
void hoandoi1(int a[][30],int n,int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			// hoan vi a[j][i] voi a[j][i+1]
			int tmp=a[j][i];
			a[j][i]=a[j][i-1];
			a[j][i-1]=tmp;
		}
	}
}
// tong cac phan tu tren cot dau tien
// tong quat i=n tinh cot o n+1
// cot se khong doi cu the o day la i j la hang la thang chay
void hoandoi(int a[][30],int n,int m){
	// i cot j hang
	int sum=0;
	for(int i=0;i==0;i++){
		for(int j=0;j<n;j++){
			// hoan doi a[j][i] voi a[j][i+1]
			int tmp=a[j][i];
			a[j][i]=a[j][i+1];
			a[j][i+1]=tmp;
		}
	}
	m--;	
}
int main(){
	int n,m;
	int a[20][30];
	scanf("%d%d",&n,&m);
	nhap(a,n,m);
//	hoandoi(a,n,m);
//	in(a,n,m);
//	printf("%d",tong(a,n,m));// tinh tong o cot x+1;
	hoandoi1(a,n,m);
	printf("\n");
	in(a,n,m);	
}

