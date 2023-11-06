#include<stdio.h>
int main(){
	int n;
	scanf("%d%d",&n,&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	// in ra tam giac duoi
//	for(int i=0;i<n;i++){
//		for(int j=0;j<=i;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
// in ra cac phan tu tren duong cheo phu
for(int i=0;i<n;i++){
	printf("%d ",a[n-i-1][i]);
	}	
for(int i=0;i<n;i++){
	printf("%d ",a[i][i]);
	}
}
