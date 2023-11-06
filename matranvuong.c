#include<stdio.h>
// ma tran vuong la ma tran co so hang bang so cot
int main(){
	int n,m;
	scanf("%d%d",&n,&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	// in ra cac phan tu tren duong cheo chinh
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
