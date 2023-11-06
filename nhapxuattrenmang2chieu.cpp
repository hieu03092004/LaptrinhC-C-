#include<stdio.h>
// mang 2 chieu co ban
//1 thao tac nhap va in ra cac phan tu trong mang 2 chieu
int main(){
	int n,m;// n so hang i la so cot
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",a[i][j]);
// se nhap tren cac hang theo chieu rong
		}
	}
// in
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("/n");
	}
}
