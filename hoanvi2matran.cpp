#include<stdio.h>
// ma tran hoan vi
int main(){
	int n,m;
	scanf("%d%d",&m,&n);
	int a[m][n],b[n][m];
// nhap cho 2 mang a va b
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
